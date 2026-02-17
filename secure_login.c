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

}