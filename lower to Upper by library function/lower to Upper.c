#include<stdio.h>
int main()
{
    char lower,upper;
    int Ascii,i;
    printf("Enter a Lowercase Letter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    Ascii = lower;
    i = upper;
    printf("The Uppercase Letter = %c \n" ,upper);
    printf("The Ascii Value of Lowercase Letter  = %d\n",Ascii);
    printf("The Ascii Value of Uppercase Letter  = %d",i);
return 0;
}
