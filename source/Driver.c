#include "Driver.h"
#include "driver/elevio.h"
#include "Queue_handler.h"


int currentfloor = -1;
Elevator_state state = START;
int lastfloor = -1;

void start_elvo(){
    if (currentfloor == -1){
        elevio_motorDirection(DIRN_UP);
        

    } else {
        elevio_motorDirection(DIRN_STOP);
        state = STANDBY;
    }
    lastfloor = currentfloor;
}

void stop_pressed(){
    if(elevio_stopButton()){
        elevio_motorDirection(DIRN_STOP);
        state == STOP;
        elevio_stopLamp(1);
        clear_Q();
        if (currentfloor != -1)
        {
            elevio_doorOpenLamp(1);
        }
        
    }

}

void drive(){
     if (state == START){
            start_elvo(); // går til en start etasje om den er mellom
        }
    while(check_queue()){
        state = DRIVE;

    }
}