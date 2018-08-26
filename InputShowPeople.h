
#ifndef _INCLUDE_SHOWPEOPLE_
#define _INCLUDE_SHOWPEOPLE_

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[256];
	int age;
	int sex;
} People;
extern void ShowPeople(People data1);
extern void InputPeople(People *data1);
#endif