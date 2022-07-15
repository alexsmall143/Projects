#include <stdio.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int mystrlen(char* str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return(len);
}

int calc_score(char* word)
{
 int sum=0;
 int num;
 int n = mystrlen(word);
 for(int x=0; x<n; x++)
  {
    num = word[x]-97;
    num = POINTS[num];
  }
  sum = sum+num;
  return sum;
}


int main(void)
{
char word1[27];
printf("Enter player one's word (lowercase): ");
scanf("%s", word1);
char word2[27];
printf("Enter player two's word (lowercase): ");
scanf("%s", word2);

int score1 = calc_score(word1);
int score2 = calc_score(word2);

if( score1 > score2 )
    {
    printf("Player one wins!");
    }
    else if ( score2 > score1 ) {
        printf("Player two wins!");
    }
    else {
        printf("Please enter a valid string");
    }
}







