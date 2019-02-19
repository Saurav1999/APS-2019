#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
int array[5]={1,2,3,4,5};
int size=sizeof(array)/sizeof(array[0]);
int i,j;
int pow_size=pow(2,size);
for(i=0;i<pow_size;i++){
    for(j=0;j<size;j++){
        if(i&1<<j)
            printf("%d",array[j]);
    }
    printf("\n");
}



}
