#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../functions.h"

void view_contact() {
    long long phone;
    char rname[40];
    char nname[40];
    char email[40];
    char choice3[5];
    FILE * rf = fopen("./contacts/users.txt", "r");

    while ( fscanf(rf, "%[^:]:%lld:%[^\n]\n", rname, &phone, email) == 3 ) {
        printf("--------------------------\n");
        printf("| NAME     : %s\n", rname);
        printf("| PHONE    : %lld\n", phone);
        printf("| EMAIL    : %s\n", email);
        printf("--------------------------\n");
    }
    printf("GO TO MENU [ yes / no ] :: ");
    scanf("%s", choice3);

    if ( strstr(choice3, "yes") ) {
        start();
    } else if ( strstr(choice3, "no") ) {
        printf("\nTHANK YOU\n");
    }
}