#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getmax(int *max,int array[]);
void getmin(int *max,int array[]);

int main(void)
{
    int max;
    int min;
    int i= 0;
    int array[10];
    char buffer[256];
   
    for(i = 0;i < 10;i++){
       printf("No,%d Input number :",i + 1 );
       fgets(buffer,256,stdin);
       array[i]=  atoi(buffer);
    }
    getmax(&max,array);
    getmin(&min,array);
    printf("max = %d : min = %d\n",max,min);
    return 0;
}

void getmax(int *max,int array[])
{
    int i = 0;
	*max = array[i];
    for(i = 0; i < 10;i++){
    if(*max < array[i]){*max = array[i];}
    } 
    return;
}
void getmin(int *min,int array[])
{
    int i = 0;
	*min = array[i]; 
    for(i = 0; i < 10;i++){
    if(*min > array[i]){*min = array[i];}  
    } 
    return;
}