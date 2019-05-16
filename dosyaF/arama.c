#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

char *dosya=argv[1];
char *aranacak=argv[2];

FILE *fara=fopen(dosya,"r");
char kelime[20];
while(!feof(fara)){

fscanf(fara,"%s",kelime);

if(strcmp(kelime,aranacak)==0){

printf("aradığınız kelime mevcut\n");
return 0;
}

}
fclose(fara);
printf("böyle bir kelime yok\n");
return 0;
}
