#include <stdio.h>

int main(void)
{
    int a = 1,b = 2,c = 3,d = 4;
    int scoren = 0,scorem = 90,scoreg = 40,scoreh = 70;
    char data1[] = "�ԍ�",data2[] = "���O",data3[] = "���ϓ_";
    char name1[] = "���̂ё�",name2[] = "���Í�",name3[] = "���c��",name4[] = "����X�l�v";
    FILE *file;
    file = fopen("test.csv","w");
    fprintf(file,"%s,%s,%s\n",data1,data2,data3);
    fprintf(file,"%d,%s,%d\n",a,name1,scoren);
    fprintf(file,"%d,%s,%d\n",b,name2,scorem);
    fprintf(file,"%d,%s,%d\n",c,name3,scoreg);
    fprintf(file,"%d,%s,%d\n",d,name4,scoreh);
    
    fclose(file);

    return 0;
}