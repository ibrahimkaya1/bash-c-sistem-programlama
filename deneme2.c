#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main (int argc, char *argv[])
{
  FILE *fp1, *fp2, *fp3;
  char cd1;

  if (argc!=3) {
      printf("Kullanım: deneme <Kaynak dosya> <Hedef dosya>\n");
      exit(1);
  }
  if ((fp2 = fopen(argv[2], "rb")) == NULL) {
      printf("Hedef dosya açılamadı!\n");
      exit(1);
  }
  if ((fp3 = fopen("dosya1.txt", "wb")) == NULL) {
      printf("Dosya açılamadı!\n");
      exit(1);
  }

  while ((cd1 = fgetc(fp2)) != EOF) fputc (cd1, fp3);

  fclose (fp2);
  fclose (fp3);

  if ((fp1 = fopen(argv[1], "rb")) == NULL) {
      printf("Kaynak dosya açılamadı!\n");
      exit(1);
  }

  if ((fp2 = fopen(argv[2], "wb")) == NULL) {
      printf("Hedef dosya açılamadı!\n");
      exit(1);
  }

  while ((cd1 = fgetc(fp1)) != EOF) fputc (cd1, fp2);

  fclose (fp1);
  fclose (fp2);

  if ((fp3 = fopen("dosya1.txt", "rb")) == NULL) {
      printf("Dosya açılamadı!\n");
      exit(1);
  }

  if ((fp1 = fopen(argv[1], "wb")) == NULL) {
      printf("Kaynak dosya açılamadı!\n");
      exit(1);
  }

  while ((cd1 = fgetc(fp3)) != EOF) fputc (cd1, fp1);

  fclose (fp1);
  fclose (fp3);
}
