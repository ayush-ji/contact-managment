
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../functions.h"

void add_contact() {

    char names[40];
    long long num;
    char eml[40] ;
    char choice[5];
    char choice2[5];
    FILE * af = fopen("/home/ayushji/c/contact_managment/contacts/users.txt", "a");

    system("clear");
    printf("-------------------------------\n");
    printf("WELCOME TO ADD CONTACT WIZ.\n");
    printf("-------------------------------");
    printf("\n\n\nENTER YOUR NAME :: ");
    fscanf(stdin, "\n%[^\n]", names);
    printf("\n\nENTER YOUR PHONE NUMBER :: ");
    scanf("%lld", &num);
    printf("\n\nENTER YOUR EMAIL :: ");
    scanf("%s", eml);
    printf("\n\n");
    fprintf(af ,"\n%s:%lld:%s", names, num, eml);
    fclose(af);
    printf("-------------------------------\n");
    printf("CONTACT SUCCESSFULLY ADDED \n");
    printf("-------------------------------\n");
    printf("do you want to add more ? [yes/no] :: ");
    scanf("%s", choice);
    printf("%s", choice);
    if ( strstr(choice, "yes") ) {
        add_contact();
    } else if ( strstr(choice, "no") ) {
        printf("DO YOU WANT TO RETURN TO MENU OR QUIT [ menu / quit ] ");
        scanf("%s", choice2);
        printf("\n");
        if ( choice2 == "menu" ) {
            start();
        } else if ( choice2 == "quit" ) {
            printf("thank you\n\n");
        } else {
            printf("BAD INPUT \n\n");
        }
    } else {
        printf("BAD INPUT \n\n");
    }
}
