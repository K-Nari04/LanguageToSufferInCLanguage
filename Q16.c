#include <stdio.h>

typedef struct{
    char name[64]; //名前
    char sex[64]; //性別
    int age; //年齢
}profile;

void profile_scan(profile *data);
void profile_print(profile data);

int main(void)
{
    profile data[10];
    int i;
    for(i = 1;i < 4;i++){
    profile_scan(&data[i]);
    }
    for(i = 1;i < 4;i++){
    profile_print(data[i]);
    }
    return 0;
}

void profile_scan(profile *data){
   
    printf("input your name :");
    scanf("%s",&data->name);
    printf("input your sex :");
    scanf("%s",&data->sex);
    printf("input your age :");
    scanf("%d",&data->age);
    
    return;
}

void profile_print(profile data)
{
    printf("name = %s\n",data.name);
    printf("sex = %s\n",data.sex);
    printf("age = %d\n",data.age);

    return;
}