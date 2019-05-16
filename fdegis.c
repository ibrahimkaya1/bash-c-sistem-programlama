
#include <stdio.h>
#include <string.h>

int main()
{
FILE *fp; int c; char satir[100];
char *kontrol;
c=scanf("%s",&kontrol);
fp=fopen("isimler.txt","r+");
do{
c=fscanf(fp,"%s",satir);
printf("%s",satir);
if(satir!=kontrol)
{
//printf("\nHerkes de seni görüyorum kiminde derin bakışlarını kiminde çukur gamzeni kimide bana bakınca parlayan gözlerini bazen sen sanıp baka kalıyorum işin garip tarafı onlara bakarken seni gördüğümü tek biliyorum onlarda doğal olarak yanlış anlıyorum senin bende bitmek bilmeyen sevdan sadece benim canımı yakmıyor ben bunları yazarken sen şimdi tatlı tatlı uyuyorsun kocan ve kızın ile ben bunu asla kendime yakıştıramıyorum ama açtığın yara hala derin millet beni dışardan mutlu görüyor içimde ne fırtınılar koptuklarından haberi yok acaba önceden sen mutlu ol ben mutsuz olsam da olur derdim ama öyle olmuyor be başkasının güzeli, acaba seni sevebildiğim kadar başkasını sevebilecekmiyim?");
printf("değil\n");

}else{
printf("AYŞE");

}}while(c!=EOF);
}
