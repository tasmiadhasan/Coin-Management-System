#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>
#include "splash.h"
#include "menu.h"

void login();
void regis();

struct login{
char fname[100];
char lname[100];
char username[100];
char password[100];
};

int main()
{
    int cho;
    puts("\n\n\n\n                                              Welcome to Coin Management System\n");
    puts("\n                                              Please Follow the security Steps\n");
    printf("                                           1.Sign Up\n");
    printf("                                           2.Sign In\n\n");

    puts("                                             Press the number & Enter\n");
    printf("                                           >>>>");

    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        regis();
    }
    else if(cho==2)
        {
        system("CLS");
        login();}
}



void login()
{
    char username[200], password[100];
    FILE *log;
    struct login l;
    int found = 0;

    puts("                                                  Sign In\n");
    printf("                                             Enter Username:");
    scanf("%199s", username);
    printf("                                             Enter Password:");
    scanf("%99s", password);

    log = fopen("login.txt", "rb");
    if (log == NULL) {
        printf("\n                                   No users registered yet. Please sign up first.\n");
        getch();
        system("CLS");
        regis();
        return;
    }

    while (fread(&l, sizeof(l), 1, log) == 1) {
        if (strcmp(username, l.username) == 0 && strcmp(password, l.password) == 0) {
            found = 1;
            break;
        }
    }

    fclose(log);

    if (found) {
        printf("                                      Login Successful\n\n");
        menu();
    } else {
        printf("                                        Incorrect username or password.\n");
        getch();
        system("CLS");
        login();
    }
}


void regis()
{
    FILE *log;
    struct login l;

    puts("                                     Coin Management Security system Registration\n\n");
    printf("                                               Enter first name:");
    scanf("%99s", l.fname);
    printf("                                               Enter last name:");
    scanf("%99s", l.lname);
    printf("                                               Enter Username:");
    scanf("%99s", l.username);
    printf("                                               Enter Password:");
    scanf("%99s", l.password);

    log = fopen("login.txt", "ab");

    fwrite(&l, sizeof(l), 1, log);
    fclose(log);
    printf("\n                                   Please Remember your user name & password!!!\n\n");
    printf("                                           PRESS ANY KEY TO CONTINUE");
    getch();
    system("CLS");
    login();
}
