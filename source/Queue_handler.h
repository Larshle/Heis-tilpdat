#pragma once
#include "driver/elevio.h"
#include "Driver.h"
#include "Lights_handler.h"
#include <stdio.h>

struct Q_floor_condition
{
    int active; 
    int waitup;
    int waitdown;
    int stop;
};



typedef struct Q_floor_condition Q_condition; // typedef for å ikke trenge å definere hver gang

extern Q_condition Q[N_FLOORS]; // lage den ekstern

void add_to_queue(int floor, ButtonType btn);

void pull_buttons();

void clear_Q();

void remove_from_queue();

int check_queue();





