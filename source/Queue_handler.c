#include "Queue_handler.h"

Q_condition Q[N_FLOORS]; // definere strukten

void pull_buttons(){ // sjekker om knapp blir trykket og legger til i kø
    for(int f = 0; f < N_FLOORS; f++){
            
            for(int b = 0; b < N_BUTTONS; b++){
                
                int btnPressed = elevio_callButton(f, b);
                if (btnPressed){
                    queue(f, b);
            } else{
                state == STANDBY;
            }
        }
    }
    stop_pressed();

}

void queue(int floor, ButtonType btn){
        if (state == START){
        start_elvo(); // går til en start etasje om den er mellom
        }
        


}
