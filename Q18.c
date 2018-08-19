#include <stdio.h>
#include <stdlib.h>

enum{
    KAKI_OLYMPIC,
    TOKI_OLYMPIC,
    NOT_OLYMPIC,
};

int olympic(int year);

int main(void)
{
    char buffer[256];
    int No;
    int year = atoi(buffer);
    printf("input year: ");
    fgets(buffer, 256, stdin);

    No = olympic(year);
    if(No == 0){
        printf("%d = KAKI_OLYMPIC\n",year);
        }else if(No == 1){
                            printf("%d = TOKI_OLYMPIC\n",year);
                            }else{
                                   printf("%d = NOT_OLYMPIC\n",year);
                                 }
    return 0;
}

int olympic(int year)
{
    if(year % 2 == 0){
        if(year % 4 == 0){
                  return KAKI_OLYMPIC;
            }else{
                  return TOKI_OLYMPIC;
                 }
    }else{
          return NOT_OLYMPIC;
    }
}