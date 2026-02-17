#include <stdio.h>

int main(){

    char username[20];
    char password[20];
    int i=0;

    char ch;
    printf("Please enter your username:");
    ch = getch();
    while( ch!= 13)
    {
        username[i] = ch;
        printf("*");
        ch = getch();
        i++;
    }

    username[i] = '\0';

    i=0;
    printf("\nPlease enter your password:");
    ch = getch();
    while( ch!= 13)
    {
        password[i] = ch;
        printf("*");
        ch = getch();
        i++;
    }

    password[i] = '\0';

    printf("\nusername: %s\n",username);
    printf("\password: %s\n",password);


    printf("\nPress Enter to exit...");   
    getchar();
    
    return 0;
}