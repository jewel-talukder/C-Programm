#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter Three Integer Number :  ");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
        avg =(float)sum/3;
    printf("Sum =  %d\nAverage = %.2f",sum,avg);


    return 0 ;

}
