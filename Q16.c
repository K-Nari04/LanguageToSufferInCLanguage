#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[256]; //名前
    char sex[256]; //性別
    int age; //年齢
}profile;

void profile_scan(profile *data);
void profile_print(profile data);

int main(void)
{
    profile data[3];
    int i;
    for(i = 0;i < 3;i++){
        profile_scan(&data[i]);
        }
    for(i = 0;i < 3;i++){
        profile_print(data[i]);
        }
    return 0;
}

void profile_scan(profile *data){
   
    printf("input your name :");
    fgets(data->name,256,stdin);
    printf("input your sex :");
    fgets(data->sex,256,stdin);
    printf("input your age :");
    char pvalue[256];
    fgets(pvalue,256,stdin);
    data->age = atoi(pvalue);
    return;
}

void profile_print(profile data)
{
    printf("name = %s\n",data.name);
    printf("sex = %s\n",data.sex);
    printf("age = %d\n",data.age);
    return;
}