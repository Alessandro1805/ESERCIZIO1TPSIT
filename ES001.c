//csv comma separeted values
//ESERCIZIO UNO 13/09/2022
//AUTHOR:GALLO ALESSANDRO
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define LUNG 16575

typedef struct leggifile {
    int rank;
    int anno;
    char* nomeg;
    char* nomep;
    char* nomege;
    char* nomepu;
}Copia;
int main() {
    FILE *file;
    Copia dati[LUNG];
    char strApp[LUNG];
    int n=0;
    char c[LUNG];
    file=fopen("vgsales.csv","r");
    if(file==NULL){
        printf("errore nell'apertura del file");
    }
     printf("apertura del file riuscita\n");
     fgets(strApp,LUNG,file);
     while(fgets(strApp,LUNG,file)!=EOF){
        dati[n].rank=atoi(strtok(strApp,","));
        dati[n].nomeg=strtok(NULL,",");
        dati[n].nomep=strtok(NULL,",");
        dati[n].anno=atoi(strtok(NULL,","));
        dati[n].nomege=strtok(NULL,",");
        dati[n].nomepu=strtok(NULL,",");
        printf("%d ",dati[n].rank);
        printf("%s ",dati[n].nomeg);
        printf("%s ",dati[n].nomep);
        printf("%d ",dati[n].anno);
        printf("%s ",dati[n].nomege);
        printf("%s \n",dati[n].nomepu);
        n++;
     }
     fclose(file);
}

