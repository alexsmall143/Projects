#include <stdio.h>

int main(void)
{
    int height;
    // getting user input
    do
    {
        printf("Please enter desired tower height: ");
        scanf("%i", &height);
    }
    //creating range for user
    while (height > 25 || height < 1);
    //creating new line based on hieght
    for (int line = 0; line < height; line++)
    {
        //making pyramid left to right
        for (int space = 0; space < height - line - 1; space++)
        {
            printf(" ");
        }
        //creating hash
        for (int hash = 0; line >= hash; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}