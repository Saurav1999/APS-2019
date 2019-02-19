//return the number of subset whose value is greater than or equal to a given value
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int subsetsum(int * ar,int set_size,int value)
{
    int count=0;
    int x;
    for(x=0;x<=pow(2,set_size);x++)

    {
            int sum=0;
            int k=0;
            for(k=0;k<=set_size;k++)
            {
               if(x&(1<<k))
               {

                    sum=sum+ar[k];
               }

            }
            if(sum==value)
            {
                count=count+1;
            }



    }
    return count;

}
int main()
{

    int ar[5]={1,2,3,4,6};
    int set_size=5;
    int value=6;
    int c=subsetsum(ar,set_size,value);
    printf("Number of subsets: %d",c);
}

