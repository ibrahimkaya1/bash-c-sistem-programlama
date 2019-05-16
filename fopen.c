#include <stdio.h>
#include <string.h>

int main()
{
FILE *fp;
if(fopen("mailler.txt","r"))
printf("dosya açıldı\n");
else
printf("dosya açılamadı|n");
}
