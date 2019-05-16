#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
char *aranacak=argv[1];
char *degisecek=argv[2];
char *dosya=argv[3];

FILE *fp=fopen(dosya,"r");
FILE *fiki=fopen("bakalim.txt","w");
char ch;
int sindex;
int count=0;
int esitlik=1;
int aruzunluk=strlen(aranacak);
printf("%d uzunluk",aruzunluk);
printf("%s aranacak , \n%s degisecek ,\n%s dosya \n",aranacak,degisecek,dosya);

if(fp==NULL)
 printf("dosya bulunamadı");
else
{
 printf("Dosya açıldı\n");
 
 while(ch !=EOF)
 {
 	for(int i=1;i<aruzunluk;i++)
	{
		ch=getc(fp);
		if(ch==aranacak[i])
		{
			sindex=count;
			esitlik++;
		}
		else break;
	}
	if(esitlik==aruzunluk)
	{
		printf("%d . indiste aradıgınız %s var \n ",sindex,aranacak);
		fprintf(fiki,"%s",degisecek);
		printf("%d indisindeki %s kelimesi %s ile değiştirildi",sindex,aranacak,degisecek);
	}
	

 	}
	fprintf(fiki,"%c",ch);
	}
	remove(dosya);
	rename("bakalim.txt",dosya);
	fclose(fiki);
	return 0;
}

