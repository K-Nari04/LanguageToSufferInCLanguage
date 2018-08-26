// InputPeople.c

#include <stdio.h>
#include <string.h>
#include "InputShowPeople.h"

void InputPeople(People *data1)
{
    printf("名前:");
    scanf("%s",data1->name);
    printf("年齢:");
    scanf("%d",&data1->age);
    printf("性別(1-男性、2-女性):");
    scanf("%d",&data1->sex);
    printf("\n");
}
