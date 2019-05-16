#include <stdio.h>
#include <string.h>
int main()
{
FILE *fp; char *c;char satir[100];
fp=fopen("onsatir.txt","r");
do{
c=fgets(satir,100,fp);
if(c!=NULL)
{
printf("%s",satir);
}
}while(c!=NULL);
}
