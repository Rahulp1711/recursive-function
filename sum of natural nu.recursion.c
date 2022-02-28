#include<stdio.h>
int sumofNaturalNumbers(int start,int end);
int main()
{
    int start,end,sum;
    printf("Enter lower limit: ");
    scanf("%d",&start);
    printf("Enter upper limit: ");
    scanf("%d",&end);
    sum=sumofNaturalNumbers(start,end);
    printf("Sum of natural numbers from %d to %d=%d",start,end,sum);
}
int sumofNaturalNumbers(int start,int end)
{
    if(start==end)
    return start;
    else
    return start + sumofNaturalNumbers(start + 1,end);
}