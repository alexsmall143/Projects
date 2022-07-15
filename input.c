#include <stdio.h>

int main(void)
{
    char fname[20],sname[20];

    printf("Enter your first name: ");
    scanf("%s", fname);
    printf("Enter your last name: ");
    scanf("%s", sname);

    printf("Hi, %s %s", fname, sname);
    
    return 0;  
}