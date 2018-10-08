#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getmax(const int array[]);
int getmin(const int array[]);

int main(void)
{
    int i= 0;
    int array[10];
    char buffer[256];
   
    for(i = 0;i < 10;i++){
       printf("No,%d Input number :",i + 1 );
       fgets(buffer,256,stdin);
       array[i]=  atoi(buffer);
    }
    printf("max = %d : min = %d\n",getmax(array),getmin(array));
    return 0;
}

int getmax(const int array[])
{
    int i = 0;
	int max = array[i];
    for(i = 0; i < 10;i++){
    if(max < array[i]){max = array[i];}
    } 
    return max;
}
int getmin(const int array[])
{
    int i = 0;
	int min = array[i]; 
    for(i = 0; i < 10;i++){
    if(min > array[i]){min = array[i];}  
    } 
    return min;
}