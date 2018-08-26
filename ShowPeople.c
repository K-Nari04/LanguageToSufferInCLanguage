// ShouwPeple.c

#include <stdio.h>
#include <string.h>
#include "InputShowPeople.h"

void ShowPeople(People data1)
{
    char sex[16];

    printf("–¼‘O:%s\n",data1.name);
    printf("”N—î:%d\n",data1.age);

    if (data1.sex == 1) {
        strcpy(sex,"’j«");
    } else {
        strcpy(sex,"—«");
    }

    printf("«•Ê:%s\n",sex);
    printf("\n");
}