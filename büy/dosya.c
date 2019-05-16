#include <stdio.h>
#include <string.h>

int main(){

int tercih=1;


while(tercih>0){
printf("1-Veri kaydetme\n");
printf("2-veri arama\n");
printf("3-Veri Silme\n");
printf("4-Veri Güncelle\n");
printf("5-Veri Göster\n");
scanf("%d",&tercih);

if(tercih==1){
char isim[20],ders[20];
int not;
FILE *fkaydet=fopen("ilk.txt","a");
printf("isim giriniz...:\n");
scanf("%s",isim);
printf("ders adı......:\n");
scanf("%s",ders);
printf("not giriniz....:\n");
scanf("%d",&not);

fprintf(fkaydet,"%s %s %d ",isim,ders,not);

fclose(fkaydet);

}
if(tercih==2){

char aranacak[20];
printf("aranacak kelimeyi giriniz...:\n");
scanf("%s",aranacak);

FILE *fp;

fp=fopen("ilk.txt","r");
int say=0;
char aranan[30];

while(!feof(fp)){

fscanf(fp,"%s",aranan);
if(strcmp(aranan,aranacak)==0)
{
	say++;
	printf("%s\n",aranan);
	
	
}
}	
	printf("aradığınız kelime mevcut %d adet var \n",say);
	fclose(fp);
}
if(tercih==3){

char silinecek[20];int sira;
printf("silinecek kelimeyi ve 1 den fazla ise kaçıncısının silineceğini giriniz...:\n");
scanf("%s",silinecek);
scanf("%d",&sira);
int say=0;
char aranan[30];
FILE *fp=fopen("ilk.txt","r");
FILE *fyedek=fopen("yedek.txt","w+");
while(!feof(fp)){

fscanf(fp,"%s",aranan);
if(strcmp(aranan,silinecek)==0)
{
	say++;
	if(sira==say){
		
	}
	else{
		fprintf(fyedek,"%s ",aranan);
	}
	
}
else{

fprintf(fyedek,"%s ",aranan);
}
}	
	printf("silme işlemi tamamlandı\n");
	fclose(fyedek);	
	fclose(fp);
	remove("ilk.txt");
	rename("yedek.txt","ilk.txt");	
}
if(tercih==4){

char upt[20];int sira;
printf("update edilecek kelimeyi ve 1 den fazla ise kaçıncısının silineceğini giriniz...:\n");
scanf("%s",upt);scanf("%d",&sira);
int say=0;
char aranan[30];
FILE *fp=fopen("ilk.txt","r");
FILE *fyedek=fopen("yedek.txt","w+");
while(!feof(fp)){

fscanf(fp,"%s",aranan);
if(strcmp(aranan,upt)==0)
{
	say++;
	if(sira==say){
		fprintf(fyedek,"%s ",upt);
	}
	else{
	fprintf(fyedek,"%s ",aranan);
	}
	
}
}	
	printf("update işlemi tamamlandı\n");
	fclose(fyedek);	
	fclose(fp);
	remove("ilk.txt");
	rename("yedek.txt","ilk.txt");
}
if(tercih==5){
FILE *foku=fopen("ilk.txt","r");
int c;
while(!feof(foku)){
c=fgetc(foku);
printf("%c",c);

}
printf("\n");
fclose(foku);
}
}
return 0;
}

