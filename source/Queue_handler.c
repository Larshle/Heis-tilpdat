#include "Queue_handler.h"

Q_condition Q[N_FLOORS]; // definere liste med type av struckten

void pull_buttons(){ // sjekker om knapp blir trykket og legger til i kø
    for(int f = 0; f < N_FLOORS; f++){
            
            for(int b = 0; b < N_BUTTONS; b++){
                
                int btnPressed = elevio_callButton(f, b);
                if (btnPressed){
                    add_to_queue(f, b);
            } 
        }
    }
    

}

void add_to_queue(int floor, ButtonType btn){

        Q[floor].active = 1; // setter til at det er noe i køen/aktivt

        switch (btn)
        {
        case BUTTON_HALL_UP:
            Q[floor].waitup = 1;
            break;
        case BUTTON_HALL_DOWN:
            Q[floor].waitdown = 1;
            break;
        case BUTTON_CAB :
            Q[floor].stop = 1;
            break;
        default:
            break;
        }
        


}

void clear_Q(){
    for (int i = 0; i < N_FLOORS; i++){
        Q[i].active = 0;
        Q[i].stop = 0;
        Q[i].waitdown = 0;
        Q[i].waitup = 0;
    }
    clear_lights();

}

void remove_from_queue(){
    Q[currentfloor].waitdown = 0;
    Q[currentfloor].stop = 0;
    Q[currentfloor].waitup = 0;
}

int check_queue(){ 
    for (int i = 0; i < N_FLOORS; i++){
        if(Q[i].active){
            return 1;
        } else{
            return 0;
        }
    }
}