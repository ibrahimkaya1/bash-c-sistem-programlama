#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
char *kopyalanacak;
FILE *fcopy;
int c;
if(argc==2){

kopyalanacak=argv[1]; 
fcopy=fopen(kopyalanacak,"r");
char *copya=strcat(kopyalanacak,"_copy");
FILE *fyeni=fopen(copya,"w+");

while(!feof(fcopy)){

if(feof(fcopy)){
break;
}
else{
fscanf(fcopy,"%lc",&c);
fputc(c,fyeni);
}
}
printf("copy is completed\n");
fclose(fcopy);
fclose(fyeni);
return 0;
}else if(argc==3){
kopyalanacak=argv[1];
char *kopya=argv[2];
fcopy=fopen(kopyalanacak,"r");
FILE *fkopya=fopen(kopya,"a+");
while(!feof(fcopy)){

fscanf(fcopy,"%lc",&c);
fputc(c,fkopya);

}
printf("copy is completed\n");
fclose(fcopy);
fclose(fkopya);
return 0;

}
else{printf("hatalı argüman girdiniz\n");return 0;}

}
