// ShouwPeple.c

#include <stdio.h>
#include <string.h>
#include "InputShowPeople.h"

void ShowPeople(People data1)
{
    char sex[16];

    printf("���O:%s\n",data1.name);
    printf("�N��:%d\n",data1.age);

    if (data1.sex == 1) {
        strcpy(sex,"�j��");
    } else {
        strcpy(sex,"����");
    }

    printf("����:%s\n",sex);
    printf("\n");
}