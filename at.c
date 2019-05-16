#include <stdio.h>
#include <string.h>

typedef struct tel_rehberi{
	char ad[15];
	char soyad[15];
	char tel[11];
}telREhberi;
telRehberi rehber;

int Guncelle(){

FILE *dosya,*yeni;
char aranan[15];

printf("Güncellenecek kayit");
scanf("%s",&aranan);

dosya=fopen("rehber.txt","r");
yeni=fopen("rehber1.txt","w");

while(!feof(dosya)){

	fscanf(dosya,"%s %s %s",rehber.ad,rehber.soyad,rehber.tel);
	if(strstr(rehber.ad,aranan)){
		printf("	Yeni Bilgiler:\n\n");
		printf("Ad: "); scanf("%s",&rehber.ad);
		printf("Soyad: ");scanf("%s",&rehber.soyad);
		printf("Tel No: ");scanf("%s",&rehber.tel);
	}//if end
	fprintf(yeni,"\n%s\t%s\t%s",rehber.ad,rehber.soyad,rehber.tel);
}//while end
fclose(dosya);
fclose(yeni);

remove("rehber.txt");
rename("rehber1.txt","rehber.txt");
return 0;
}
