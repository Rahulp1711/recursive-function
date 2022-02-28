#include<stdio.h>
void printevenodd(int cur,int limit);
void main()
{
    int lowerlimit,upperlimit;
    printf("Enter lower limit: ");
    scanf("%d",&lowerlimit);
    printf("Enter upper limit: ");
    scanf("%d",&upperlimit);
    printf("Even/odd Numbers from %d to %d are: ",lowerlimit,upperlimit);
    printevenodd(lowerlimit,upperlimit);
}
void printevenodd(int cur, int limit)
{
    if(cur>limit)
    return;
    printf("%d ",cur);
    printevenodd(cur+2,limit);
}