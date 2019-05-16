#include <stdio.h>
#include <string.h>

int main()
{
FILE *fp;
fp=fopen("mailler.txt","r");
int i;
fscanf(fp,"%d",&i);
fprintf(fp,"%d",i);
}
