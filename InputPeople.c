// InputPeople.c

#include <stdio.h>
#include <string.h>
#include "InputShowPeople.h"

void InputPeople(People *data1)
{
    printf("���O:");
    scanf("%s",data1->name);
    printf("�N��:");
    scanf("%d",&data1->age);
    printf("����(1-�j���A2-����):");
    scanf("%d",&data1->sex);
    printf("\n");
}
