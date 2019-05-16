#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct isim
{
char *oku;
};
void main(){

typedef struct isim ad;

ad ad1;

ad1.oku=(char*)malloc(sizeof(char)+100);
FILE *fp,*fp1;
fp=fopen("dosya1.txt","r");
fp1=fopen("at.txt","w+");
char bul[20];
scanf("%s",bul);
int sayac=0;
char *dizi[100];
while(!feof(fp)){

fscanf(fp,"%s",ad1.oku);
if(strcmp(ad1.oku,bul)==0)
{
	printf("aradığınız kelime mevcut: %s\n",bul);
	break;
}
}
while(!feof(fp)){

fscanf(fp,"%s",ad1.oku);

if(ad1.oku!=bul)
fprintf(fp1,"%s ",ad1.oku);
else
fprintf(fp1,"******************************************************");

}
fclose(fp);
fclose(fp1);
}
