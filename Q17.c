#include <stdio.h>

int main(void)
{
    int a = 1,b = 2,c = 3,d = 4;
    int scoren = 0,scorem = 90,scoreg = 40,scoreh = 70;
    char data1[] = "番号",data2[] = "名前",data3[] = "平均点";
    char name1[] = "野比のび太",name2[] = "源静香",name3[] = "剛田武",name4[] = "骨川スネ夫";
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