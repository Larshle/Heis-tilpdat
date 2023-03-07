#include "Driver.h"
#include "driver/elevio.h"
#include "Queue_handler.h"


int currentfloor = -1;
Elevator_state state = START;

void start_elvo(){
    if (currentfloor == -1){
        elevio_motorDirection(DIRN_UP);
        

    } else {
        elevio_motorDirection(DIRN_STOP);
        state = STANDBY;
    }
}

void stop_pressed(){
    if(elevio_stopButton()){
        elevio_motorDirection(DIRN_STOP);
        state == STOP;
        elevio_stopLamp(1);
        clear_Q();
    }

}
