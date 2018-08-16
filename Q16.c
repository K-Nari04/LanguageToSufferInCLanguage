#include <stdio.h>

typedef struct{
    char name[64]; //名前
    char sex[64]; //性別
    int age; //年齢
}profile;

void profile_scan(profile data[]);
void profile_print(profile data[]);

int main(void)
{
    profile data[10];
    profile_scan(data);
    profile_print(data);
    return 0;
}

void profile_scan(profile data[]){
    int i;
    for(i = 1;i < 4;i++){
    printf("No:%d input your name :",i);
    scanf("%s",data[i].name);
    printf("No:%d input your sex :",i);
    scanf("%s",data[i].sex);
    printf("No:%d input your age :",i);
    scanf("%d",&data[i].age);
    }
    return;
}

void profile_print(profile data[])
{
    int i;
    for(i = 1;i < 4;i++){
    printf("name = %s\n",data[i].name);
    printf("sex = %s\n",data[i].sex);
    printf("age = %d\n",data[i].age);
    }
    return;
}