#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include "driver/elevio.h"
#include "Driver.h"



int main(){
    elevio_init();
    
    printf("=== Example Program ===\n");
    printf("Press the stop button on the elevator panel to exit\n");

    elevio_motorDirection(DIRN_UP);

    while(1){
        currentfloor = elevio_floorSensor();
        
        int floor = elevio_floorSensor();
        printf("floor: %d \n",floor);
        start_elvo();

        stop_pressed();

       

        if(elevio_obstruction()){
            elevio_stopLamp(1);
        } else {
            elevio_stopLamp(0);
        }
        
       
        nanosleep(&(struct timespec){0, 20*1000*1000}, NULL);
    }

    return 0;
}
