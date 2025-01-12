#include <stdio.h>
#include <string.h>
#include "write.h"

char name_[15];
char password_[15];

int reg_au(){


    //1 = registration
    if (1 ==1 )
    {

        printf("Enter name: ");
        scanf( "%s", name_);

        printf("Enter password: ");
        scanf("%s", password_);
    }
    else{
        printf("Invalid argument\n");
    }
    


}
//authentication
int authentication(char name_aut_p_[15],char password_aut_p_[15]){
    int a = 0;
    if (strcmp(name_, name_aut_p_) == 0 && strcmp(password_, password_aut_p_) == 0)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }
    return a;
}