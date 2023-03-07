#include "Lights_handler.h"

void floor_light(){  
    if(currentfloor != -1){
        elevio_floorIndicator(currentfloor);
        lastfloor = currentfloor;
    }
}

