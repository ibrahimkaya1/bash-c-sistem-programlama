#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[])
{
  FILE *fp1;
  char cd1;
  int id1 = 0;

  if (argc!=2) {
      printf("Kullanım: deneme <dosya adı>\n");
      exit(1);
  }
  if ((fp1 = fopen(argv[1], "r")) == NULL) {
      printf("Dosya açılamadı!\n");
      exit(1);
  }
  while ((cd1 = fgetc(fp1)) != EOF) {
     putchar(cd1);
     id1++;
  }
  printf("\nDosyada bulunan toplam karakter sayısı: %d", id1);
  fclose(fp1);
}
