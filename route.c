#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./functions.h"

void start() {

    int cmd;

    system("clear");
    printf("-----------------------------------------------------\n");
    printf("  __     ___     __  ______ \n");
    printf("  \\ \\    | |    / / |______| \n");
    printf("   \\ \\   | |   / /  |____          AND\n");
    printf("    \\ \\__| |__/ /   |______   CODE    PLAY\n");
    printf("     \\_________/    |______|\n");
    printf("-----------------------------------------------------\n");

    printf("1> VIEW CONTACT\n");
    printf("2> ADD CONTACT \n");
    printf("3> DEL CONTACT \n");
    
    scanf("%d", &cmd);

    switch( cmd ) {
        case 1:
            view_contact();
            break;
        case 2:
            add_contact();
            break;
        case 3:
            del_contact();
            break;
    }
}





