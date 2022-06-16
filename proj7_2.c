#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>


#define MSG_LENGTH 80
int read_line(char str[], int n){

    int ch, i = 0;
    while((ch = getchar()) != '\n')
        if(i<n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
void encrypt (char *message, int shift){
int i = 0; int character;
while(message[i] != '\0')
{   character = message[i];
    if (character >= 97 && character <= 122){
        character = character + shift;
        if(character > 122){
            character = character - 122 + 97 - 1;
        }
        message[i] = character;
    }
    else if(character >= 65 && character <= 90){
    character = character + shift;
        if(character > 90){
            character = character - 90 + 65 - 1;
        }
        message[i] = character;
    }

    i++;
}
    

}
int main () {
int shiftAmount;
printf("Enter message to be encrypted: \n");
char message [MSG_LENGTH];
read_line(message,MSG_LENGTH);
printf("Enter shift amount: ");
scanf("%d",&shiftAmount);
encrypt(message,shiftAmount);
printf("Encrypted message: %s",message);
    return 0;
}





