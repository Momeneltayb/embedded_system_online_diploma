/*
 ============================================================================
 Name        : lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev();
int main() {

    printf("Enter a sentence: ");
    fflush(stdin);fflush(stdout);
    rev();
    return 0;
}

void rev() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        rev();
        printf("%c", c);
    }
}
