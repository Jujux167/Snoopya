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
    }
}


