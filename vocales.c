#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
// {"a","e","i","o","u","A","E","I","O","U"};

int main(){
    char c;
    char may;
    int n = 0;
    char *str[10];
    str[0] = "a";
    str[1]= "e";
    str[2]= "i";
    str[3]= "o";
    str[4]= "u";
    str[5]= "A";
    str[6]= "E";
    str[7]= "I";
    str[8]= "O";
    str[9]= "U";

    int cont = 0;

    do{
        n = read(STDIN_FILENO, &c, 1);
        for(int i=0; i<10;i++){
            if (c == *str[i]){
                cont++;
            }
        }
        
    }while(n != 0);
    printf("num vocales %d.\n", cont);

    
    

    return 0;
}