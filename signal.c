
#include <stdbool.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con;

void holamundo(int signalNumber){
    if(signalNumber == 10){
        printf("Es la señal 10\n");
        con = 2;
    }else{
        printf("Es otra señal");
    }

}




int main(){
    
    con = 1;
    signal(10, holamundo);
    while(con == 1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n");

    return 0;
}