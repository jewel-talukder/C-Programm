#include<stdio.h>
int main()
{
    int x,y;
    float avg;
    printf("Enter two Integer Number : ");
    scanf("%d %d",&x,&y);
    avg = ((float)x+y)/2;
    printf("Average = %.2f ",avg);
    return 0;
}

