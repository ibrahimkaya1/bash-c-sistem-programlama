#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

char *sil=argv[1];
FILE *fsil=fopen("metin","r");
FILE *fyedek=fopen("metin.txt","w+");

int i,tut;
int uz=strlen(sil);
char c;
while(!feof(fsil)){//while

c=fgetc(fsil);

if(c!=sil[0]){//if1
fprintf(fyedek,"%lc",c);					//ali  

}//if1
else{
	
tut=1;
for(i=1;i<uz;i++){//for
c=fgetc(fsil);
if(c!=sil[i]){//if2
fprintf(fyedek,"%lc",sil[i-1]);
break;
}//if2
else{
	tut++;
	
}


}//for
if(tut==uz){
//fprintf(fyedek,"%s","yeniden");
}
else{
fprintf(fyedek,"%lc",c);
}
}


}//while
fclose(fyedek);
fclose(fsil);
return 0;
}
