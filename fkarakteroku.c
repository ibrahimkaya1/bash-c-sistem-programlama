#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char birkelime[100];
	int c;
	fp=fopen("onsatir.txt","r");
	do{
		c=fscanf(fp,"%s",birkelime);
		printf("%s\n",birkelime);
	}while(c!=EOF);
	fclose(fp);
}
