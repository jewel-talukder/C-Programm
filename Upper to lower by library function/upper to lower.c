#include<stdio.h>
int main()
{
    char lower,upper;
    int Ascii,i;
    printf("Enter a Uppercase Letter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    Ascii = upper;
    i = lower;
    printf("The lowercase Letter = %c \n" ,lower);
    printf("The Ascii Value of Uppercase Letter  = %d\n",Ascii);
    printf("The Ascii Value of lowercase Letter  = %d",i);
return 0;
}
