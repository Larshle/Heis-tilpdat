#pragma once
#include "driver/elevio.h"
#include "Driver.h"
#include <stdio.h>

struct Q_floor_condition
{
    int active;
    int waitup;
    int waitdown;
    int stop;
};

typedef struct Q_floor_condition Q_condition;

extern Q_condition Q[N_FLOORS];

void pull_buttons();

