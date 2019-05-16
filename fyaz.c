#include <stdio.h>
#include <string.h>
int main()
{
FILE *fp;
char ivir[25];
int index;
fp=fopen("onsatir.txt","w");
strcpy(ivir,"Bu bir örnek satirdir.");
for(index=1;index<=10;index++)
	fprintf(fp,"%s Satir no: %d\n",ivir,index);
fclose(fp);
}
