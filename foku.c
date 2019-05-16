#include <stdio.h>
#include <string.h>

int main()
{
FILE *fp;
int c;
fp=fopen("onsatir.txt","r");
if(fp==NULL)printf("Böyle bir dosya yok\n");
else
{
do{
	c=getc(fp);//bir karakter oku
	putchar(c);// ekranda goster
}while(c!=EOF);// Dosya sonuna (END of FILE) a kadar devam
}
fclose(fp);
}
