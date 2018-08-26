// ShouwPeple.c

#include <stdio.h>
#include <string.h>
#include "InputShowPeople.h"

void ShowPeople(People data1)
{
    char sex[16];

    printf("名前:%s\n",data1.name);
    printf("年齢:%d\n",data1.age);

    if (data1.sex == 1) {
        strcpy(sex,"男性");
    } else {
        strcpy(sex,"女性");
    }

    printf("性別:%s\n",sex);
    printf("\n");
}