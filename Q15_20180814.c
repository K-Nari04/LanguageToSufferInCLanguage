#include <stdio.h>

void getmaxmin(int *max,int *min,int data[10]);

int main(void)
{
    int i;
    int max,min;
    int data[10];
    for(i = 0;i < 10;i++){
    printf("input %d Nunber:",i);
    scanf("%d",&data[i]);
    if(data[i] == -1)break;
    }
    getmaxmin(&max,&min,data);
    printf("max = %d min = %d\n",max,min);
    return 0;
}

void getmaxmin(int *max,int *min,int *data)
{
    int i;
    *min = data[0];
    *max = data[0];
    for(i = 0;i < 10;i++){
        if(data[0] > data[i]){
            *min = data[i];
        }else if(data[0] < data[i]){
            *max = data[i];
        }
        
    }
        return;
}