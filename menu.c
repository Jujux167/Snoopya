#include <stdio.h>
#include <string.h>
#include "main.h"





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
            case 10:
                printf("suppr\n");
                break;

            default:
                printf("autre\n");
                break;




        }
    } while (c != 100000);
    return 0;
}


