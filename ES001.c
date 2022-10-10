//csv comma separeted values
//ESERCIZIO UNO 13/09/2022
//AUTHOR:GALLO ALESSANDRO
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNGS 1024
#define LUNG 16570

typedef struct leggifile {
    int rank;
    int anno;
    char* nomeg;
    char* nomep;
    char* nomege;
    char* nomepu;
    float  nasales;
    float  eusales;
    float jpsales;
    float otsales;
    float gbsales;
}Copia;
int main() {
    FILE *file,*fp;
    Copia *data;
    Copia *ripiega;
    char *strApp;
    int n=0,ind=0,num=0;
    char c[LUNGS];
    fp= fopen("vgsales.csv","r");
    if(fp==NULL){
        printf("impossibile aprile il file");
    }else{
        printf("file aperto");
    }
    while(fgets(strApp, LUNGS, fp)){
        num++;
    }
    num --;
    fclose(fp);
    data=(Copia*)malloc(num*sizeof(Copia));
    ripiega=data;
    file=fopen("vgsales.csv","r");
    if(file==NULL){
        printf("errore nell'apertura del file");
        return 0;
    }
     printf("apertura del file riuscita\n");
     fgets(strApp,LUNGS,file);
     while(fgets(strApp,LUNG,file)){
        ripiega->rank=atoi(strtok(strApp,","));
        ripiega->nomeg=strtok(NULL,",");
        ripiega->nomep=strtok(NULL,",");
        ripiega->anno=atoi(strtok(NULL,","));
        ripiega->nomege=strtok(NULL,",");
        ripiega->nomepu=strtok(NULL,",");
        ripiega->nasales=atof(strtok(NULL,","));
         ripiega->eusales=atof(strtok(NULL,","));
         ripiega->jpsales=atof(strtok(NULL,","));
         ripiega->otsales=atof(strtok(NULL,","));
         ripiega->gbsales=atof(strtok(NULL,","));
         printf("%d",ripiega->rank);
        printf("%s ",ripiega->nomeg);
        printf("%s ",ripiega->nomep);
        printf("%d ",ripiega->anno);
        printf("%s ",ripiega->nomege);
        printf("%s ",ripiega->nomepu);
        printf("%f ",ripiega->nasales);
        printf("%f ",ripiega->eusales);
        printf("%f ",ripiega->jpsales);
        printf("%f ",ripiega->otsales);
        printf("%f\n ",ripiega->gbsales);
        ripiega++;
     }
     free(data);
     fclose(file);
}

