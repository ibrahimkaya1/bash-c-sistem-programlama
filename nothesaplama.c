#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int ksayisi=argv[0];
    double sort=argv[1];
    int ort=argv[2];
    double ss=argv[3];
    if(argc==4){
      double t=(ort-sort)*10/ss+50;
      
      if(ksayisi<11||sort>80){
          if(89<ort&&ort<101){
              printf("AA");
              return 0;
          }
          else if(79<ort){
              printf("BA");
              return 0;
          }
          else if(74<ort){
              printf("BB");
              return 0;
          }
          else if(69<ort){
              printf("CB");
              return 0;
          }
          else if(59<ort){
              printf("CC");
              return 0;
          }
          else if(49<ort){
              printf("DC");
              return 0;
          }
          else if(39<ort){
              printf("DD");
              return 0;
          }
          else if(29<ort){
              printf("FD");
              return 0;
          }
          else{
              printf("FF");
              return 0;
          }
      }
    }
    else{
        printf("hatalı giriş");
        return 0;
    }

}