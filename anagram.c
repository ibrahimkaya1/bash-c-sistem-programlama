#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

    char *bir=argv[1];
    char *iki=argv[2];
    char temp;
        

    int uzunluk=strlen(bir);
    int uzunluk2=strlen(iki);

    if(uzunluk!=uzunluk2){
        printf("anagram değil\n");
        return 0;
    }
    else{
        for(int i=0;i<uzunluk;i++){
            for(int j=0;j<uzunluk2;j++){
                if(bir[i]<bir[j]){
                    temp=bir[i];
                    bir[i]=bir[j];
                    bir[j]=temp;
                }
                 if(iki[i]<iki[j]){
                    temp=iki[i];
                    iki[i]=iki[j];
                    iki[j]=temp;
                }
            }
        }
        for(int k=0;k<uzunluk;k++){
            if(bir[k]!=iki[k]){
                printf("anagram değil\n");
                return 0;
            }
        }
       
    }
     printf("anagram");
        return 0;
}