#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){

if(argc!=3){
printf("iki kelime giriniz11");
return 0;
}

char *ilk=argv[1];
char *iki=argv[2];

int uz1=strlen(ilk);
int uz2=strlen(iki);

if(uz1!=uz2){

printf("anagram değil1");
return 0;
}
int i,j;
char temp;
for(i=0;i<uz1;i++){
for(j=0;j<uz1;j++){

if(ilk[i]>ilk[j])
{
temp=ilk[i];
ilk[i]=ilk[j];
ilk[j]=temp;
}
if(iki[i]>iki[j]){

temp=iki[i];
iki[i]=iki[j];
iki[j1]=temp;
}

}

}
for(int k=0;k<uz1;k++){

if(ilk[k]!=iki[k]){

printf("anagram değil2");
return 0;
}
}
printf("anagramdır");
return 0;
}
