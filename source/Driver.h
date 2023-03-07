#pragma once
#include "Driver.h"
#include "driver/elevio.h"
#include "Queue_handler.h"


extern int currentfloor; // have to have an global varibal for currentfloor, having this in the function memory keeps it away form stack
extern int lastfloor; // nyttig for å få lysene til å funke 
typedef enum
{

    START, DRIVE, STANDBY, LANDING, STOP // Making the different states the elevator can be in

    
} Elevator_state;

extern Elevator_state state;

void start_elvo(); // when the elevator starts it goes to a floor

void stop_pressed();

void drive();

void standby();