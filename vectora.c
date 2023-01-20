#include <stdio.h>
int multi, i=0;
int main(){
    FILE *vector=NULL;
    FILE *vector2=NULL;
    vector=fopen("vector.txt","r");
    vector2=fopen("vector2.txt","w");
    if (vector==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    while (!feof(vector)){
      fscanf(vector, "%d",&i); 
        if (i %5==0){
            fprintf(vector2, "son multiplos de 5: %d \n",i);
        }else{
            fprintf( vector2 ," %d \n ",i);
        }
    }
    fclose(vector);
    fclose(vector2);
    return 0; 
}
