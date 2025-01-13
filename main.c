#include <stdio.h>
#include "write.h"



int main(){
    unsigned short b = 30;
    char login [15], password [15];
    // call the function to get the user input registaration
    reg_au();
    // call the function to get the user authentication
    printf("Enter login: ");
    scanf("%s", login);
    printf("Enter password: ");
    scanf("%s", password);
    b = authentication(login,password);


    if (b == 1)
    {
        printf("Access granted");
    }
    else if (b == 0)
    {
        printf("Access denied");
    }
    else{
        printf("Access unknown");
    }
    
    
    return 0;
}