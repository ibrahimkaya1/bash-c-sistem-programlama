#include <string.h>
#include <stdio.h>
int main()
{
FILE *fp;char birkelime[100];
fp=fopen("onsatir.txt","r");
int c;
do{
c=fscanf(fp,"%s",birkelime);
if(c!=EOF)
{
printf("%s\n",birkelime);
}
}while(c!=EOF);
fclose(fp);
}
