#include <stdio.h>
#include <stdlib.h>
#include "../functions.h"

void del_contact() {

    char del_nm[40];

    printf("-------------------------------\n");
    printf("WELCOME TO DEL CONTACT WIZ.\n");
    printf("-------------------------------\n\n\n");
    printf("ENTER THE FULL NAME OF CONTACT TO DEL :: ");
    scanf("%[^\n]\n", del_nm);
    printf("%s", del_nm);
}