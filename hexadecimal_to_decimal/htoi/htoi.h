//Name: Maria Esteban
//Purpose: function that converts hexadecimal numbers to decimal numbers
//Date: 11/21/24

#ifndef HTOI_H_INCLUDED
#define HTOI_H_INCLUDED
#include <math.h>

int htoi(char s[]){
    int j=0;
    //Check if its has Ox or 0X and ignore those characters
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
        j=2;
    }
    int value=0;
    int length=strlen(s)-1;
    //loop through every digit starting on the rightmost
    for (int i=length, p=0; j<=i; i--, p++){
        char c = toupper(s[i]);
        //if it's a character get the value of the character, multiply it by 16 to the pth power, and add it to current value
        if (isdigit(c)){
            value+=(c-'0')*pow(16, p);
        }
        //if it's a letter, check that is valid, get the value of the character, multiply it by 16 to the pth power, and add it to current value
        else if (c >= 'A' && c <= 'F'){
            value+=(c - 'A' + 10)*pow(16, p);
        }
        //there is an invalid digit, error message
        else{
            printf("Invalid digit: %c \n", s[i]);
            return -1;
            break;
        }

    }
    return value;
}

#endif // HTOI_H_INCLUDED
