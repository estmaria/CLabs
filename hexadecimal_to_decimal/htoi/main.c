//Name: Maria Esteban
//Purpose: test cases and output for the function in the header file
//Date: 11/21/24

#include <stdio.h>
#include <stdlib.h>
#include "htoi.h"

int main()
{
    char hexStr1[] = "7b";
    char hexStr2[] = "0x1A3F";
    char hexStr3[] = "13NA";

    printf("Hexadecimal %s -> ", hexStr1);
    if (htoi(hexStr1)!=-1){
        printf("Decimal %d\n", htoi(hexStr1));
    }
    printf("Hexadecimal %s -> ", hexStr2);
    if (htoi(hexStr2)!=-1){
        printf("Decimal %d\n", htoi(hexStr2));
    }
    printf("Hexadecimal %s -> ", hexStr3);
    if (htoi(hexStr3)!=-1){
        printf("Decimal %d\n", htoi(hexStr3));
    }

    return 0;
}
