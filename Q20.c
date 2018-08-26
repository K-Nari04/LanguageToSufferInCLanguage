#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "InputShowPeople.h"


int main(void)
{
    int i = 0;
    int count,datasize;;
    People *data1;

    datasize = 10;
    data1 = malloc(sizeof(People)*10);
    if(data1 == NULL){exit(0);}

    do{
        if(i >= datasize){
            datasize++;
            People *p_;
            p_ = realloc(data1,sizeof(People)*datasize);

            if(p_ == NULL){
                perror("Failed to reallocate People buffer!");
                free(data1);
                exit(1);
            }

            data1 = p_;
        }
        InputPeople(&data1[i]);
    }while(data1[i++].age != -1);
    
    for(count = 0;count < i;count++)
    {
       ShowPeople(data1[count]); 
    }
    
    free(data1);

    return 0;
}