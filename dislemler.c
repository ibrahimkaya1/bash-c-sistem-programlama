#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ad{
	
	char *oku;
};
int main(int argc,char *argv[]){

typedef struct ad isim;

FILE *fp=fopen("dosya1.txt","r");

isim isim1;
isim1.oku=(char*)malloc(sizeof(char)+100);
printf("aranacak kelime\n  ");
char bul[20];
//scanf("%s",bul);
char *dizi[100];
int sayac=0;
while(!feof(fp)){

	fscanf(fp,"%s",isim1.oku);
	dizi[sayac]=isim1.oku;
printf("%s",&dizi[sayac]);
	sayac++;	
	/*if(strcmp(isim1.oku,bul)==0)
	{
		printf("kelime bulundu");
		exit(0);	
	}*/

}

return 0;
}
