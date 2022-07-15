#include <stdio.h>

int main(void)
{

int CtoF;
int FtoC;
int input;
int inputF;
int inputC;

//asking user to input unit they wish to convert
printf("Please input your unit, Celsius: 1 Farenheit: 2 ");
scanf("%i", &input);

//if input = celsius
if (input == 1)
 {
printf("Please enter the Celsius Degree to convert: ");
scanf("%i", &inputC);
int CtoF = ((9.0/5.0) * inputC + 32);
printf("%i", CtoF);
 }
 //if input = farenheit
 else if(input == 2)
 {
    printf("Please enter the Celsius Degree to convert: ");
    scanf("%i", &inputF);
    int FtoC = ((inputF-32) * (5.0/9.0));
    printf("%i", &FtoC);
 }
else 
    printf("Please enter either 1 or 2");

}
