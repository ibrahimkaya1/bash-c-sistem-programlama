#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc,char *argv[]){


FILE *fp1,*fp2,*fp3;
char *ilk=argv[0];
char *iki=argv[1];
fp1=fopen(ilk,"r");

if(argc==1)
{
fp3=fopen("ilk.txt_copy","w");

while(!feof(fp1)){

putc(getc(fp1),fp3);

}

fclose(fp3);
fclose(fp1);
}
else if(argc==2)
{
fp2=fopen(iki,"w");
while(!feof(fp1)){

putc(getc(fp1),fp2);
}
//strcpy(fp1,fp2);
fclose(fp2);
fclose(fp1);
}
else printf("1 veya 2 argüman girmelisiniz");

return 0;

}
