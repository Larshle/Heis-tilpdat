#include "Driver.h"

int currentfloor = -1 ;


void start_elvo(){
    if (currentfloor == -1){
        elevio_motorDirection(DIRN_UP);
        

    } else {
        elevio_motorDirection(DIRN_STOP);
        state = STANDBY;
    }
}