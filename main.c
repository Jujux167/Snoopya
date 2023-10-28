#include <stdio.h>
#include <string.h>
#include "main.h"



int clavier() {

    fflush(stdin);
    int c;

    if ((c = getch()) == 224) {
        int b = getch();
        switch (b) {
            case 77:
                //printf("droite");
                return 1;
                break;
            case 75:
                //printf("gauche");
                return 2;
                break;
            case 72:
                //printf("haut");
                return 3;
                break;
            case 80:
                //printf("bas");
                return 4;
                break;
            default:
                //printf("autre");
                return 0;
                break;
        }

    }

    switch (c) {
        case 13:
            //printf("enter");
            return 5;
            break;
        case 27:
            //printf("echap");
            return 6;
            break;
        case 32:
            //printf("espace");
            return 7;
            break;
        case 8:
            //printf("backspace");
            return 8;
            break;
        case 9:
            //printf("tab");
            return 9;
            break;

        default:
            //printf("autre");
            return 0;
            break;
    }}
int main() {
    int c;
    do {
        c = clavier();
        printf("%d\n", c);
        switch (c) {
            case 1:
                printf("droite\n");
                break;
            case 2:
                printf("gauche\n");
                break;
            case 3:
                printf("haut\n");
                break;

            case 4:
                printf("bas\n");
                break;
            case 5:
                printf("enter\n");
                break;
            case 6:
                printf("echap\n");
                break;
            case 7:
                printf("espace\n");
                break;
            case 8:
                printf("backspace\n");
                break;
            case 9:
                printf("tab\n");
                break;

            default:
                printf("autre\n");
                break;




        }
    } while (c != 100000);
    return 0;
}


