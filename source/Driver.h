#pragma once
#include "driver/elevio.h"

extern int currentfloor; // have to have an 

typedef enum
{

    START, DRIVE, STANDBY, LANDING, STOP // Making the different states the elevator can be in

    
} Elevator_state;

extern Elevator_state state;

void start_elvo(); // when the elevator starts it goes to a floor
