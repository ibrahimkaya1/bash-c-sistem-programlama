#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){

char *ilk,*iki;

printf("%d",argc);
FILE *fp1,*fp2;
int ch;
char p[28]="Kopya_";
if(argc==3){

    ilk=argv[1];
    iki=argv[2];

    fp1=fopen(ilk,"r");
    fp2=fopen(iki,"a");
while(!feof(fp1)){
    ch=fgetc(fp1);
    fputc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
printf("copy is finished\n");
return 0;
}
else if(argc==2){
ilk=argv[1];
strcat(p,ilk);
fp1=fopen(ilk,"r");
fp2=fopen(p,"w");

while(!feof(fp1)){
ch=fgetc(fp1);
fputc(ch,fp2);

}
fclose(fp2);
fclose(fp1);
printf("kopyalama tamamlandı\n");
return 0;
}
else{
    printf("1 veya 2 argüman giriniz\n");
    return 0;
}
}
