#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){

char *ilk=argv[1];
char *iki=argv[2];

int uzunluk=strlen(ilk);
int uzunluk2=strlen(iki);


char temp;
int i,j;

if(uzunluk!=uzunluk2){

printf("Anagram değil");
return 0;
}
for(i=0;i<uzunluk;i++){
for(j=0;j<uzunluk;j++){

if(ilk[i]<ilk[j]){

temp=ilk[i];
ilk[i]=ilk[j];

ilk[j]=temp;

}
if(iki[i]<iki[j]){

temp=iki[i];
iki[i]=iki[j];
iki[j]=temp;
}
}
}
for(i=0;i<uzunluk;i++){

if(ilk[i]!=iki[i]){
	printf("anagram değil..");
	return 0;
}
}
printf("anagramdır!!!!");
return 0;


}
