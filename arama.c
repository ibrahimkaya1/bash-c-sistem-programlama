#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int tercih=2;
while(tercih>1){
printf("Veri Kaydet : 2 \n");
printf("Veri Oku : 3 \n");
printf("Veri Sil : 4 \n");
 
scanf("%d",&tercih);
 
if(tercih==2){
FILE *fp=fopen("ilk.txt","a");
char bilgi[1000];
printf("Kaydetmek Istediginiz Veriyi Girin : "); 
scanf("%s",bilgi);
fprintf(fp,"%s\n",bilgi);
fclose(fp);
}
 
else if(tercih==3){
FILE *fp=fopen("ilk.txt","r");
if(fp=fopen("ilk.txt","r")){
char bilgi[1000];
while(!feof(fp)){
    if(feof(fp)){break;}
    else{
        fscanf(fp,"%s",bilgi);
        printf("%s \n",bilgi);
    }

}
}else{
printf("Aradiginiz Dosya Yok!..");
}
fclose(fp);
}
else if(tercih==4){
FILE *fp;
if(fp=fopen("ilk.txt","r")){
FILE *fp2=fopen("iki.txt","w");
char bilgi[1000],sil[100];
printf("Sil Bilgisi Gir: "); scanf("%s",sil);
while(!feof(fp)){
fscanf(fp,"%s",bilgi);
if(strcmp(bilgi,sil)==0){
printf("sil veri bulundu ve silindi....");
}else{
fprintf(fp2,"%s\n",bilgi);
}
 
}
fclose(fp);
fclose(fp2);
FILE *icdoldur;
if(icdoldur=fopen("ilk.txt","w")){
FILE *icoku=fopen("iki.txt","r");
char okunan[100];
while(!feof(icoku)){
fscanf(icoku,"%s",okunan);
fprintf(icdoldur,"%s\n",okunan);
}
fclose(icdoldur);
fclose(icoku);
}
}
}
}
return 0;
}