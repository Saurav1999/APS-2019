//assignment problem
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count_set_bits(int n)
{
    int result=0;
    while(n)
    {
        result=result+1;
        n=n&n-1;
    }
    return result;
}
int min(int a,int b)
{
    if(a>=b)
    {
        return b;
    }
    else
        {
            return a;

        }

}
int assign(int cost[3][3],int N)
{
    int set_size=pow(2,N);
    int dp[set_size],i,x,j,mask;
    dp[0]=0;

    for(i=1;i<set_size;i++)
        dp[i]=INT_MAX;

    for(mask=0;mask<set_size;mask++)
    {
        x=count_set_bits(mask);
        for(j=0;j<N;j++)
        {
            if((mask&(1<<j))==0)
            dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+cost[x][j]);

        }


    }

    return dp[set_size-1];
}

int main()
{

//printf("%d",count_set_bits(3));

int arr[3][3]={ {8,2,5},{3,2,7},{4,1,2}};

int i=0,j=0;
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
        printf("%d ",arr[i][j]);
  }
}
int z=assign(arr,3);
   printf("%d",z);

}


