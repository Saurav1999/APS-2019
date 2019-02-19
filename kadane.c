#include<stdio.h>
#include<stdlib.h>
int main()
{
int max=0;
int tmax=0;
int i;
int ar[]={-2,-3,4,-1,-2,1,5,-3};
for(i=0;i<8;i++)
{   //printf("%d",ar[i]);
    tmax=tmax+ar[i];
    if(tmax<0)
    {
    tmax=0;
    }
        if(tmax>max)
        {
            max=tmax;
        }


    }



printf("%d",max);
}
