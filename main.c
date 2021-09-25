#include "bolha.h"
#include "countingsort.h"
#include "heapsort.h"
#include "insercao.h"
#include "mergesort.h"
#include "quicksort.h"
#include "selecao.h"
#include "shellsort.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
//=============================================================================
void teste(uint64_t n, char ordem){

   //Delcaracao de variaveis
    //int n = (argc < 2) ? 10000 : atoi(argv[1]);
    uint64_t  *array = (uint64_t*) malloc(n*sizeof(uint64_t));

    if(array == NULL){
      printf("NAO TEM MEMORIA");
      exit(0);
    }else{
      printf("TEM MEMORIA");
    }
    
    // VARIAVEIS PARA CALCULAR O TEMPO
    clock_t inicio, fim;
    double total;


    //Geracao do conjunto a ser ordenado
    switch(ordem){
      case 'C': crescente2(array, n);
      break;
     /* case 'D': decrescente(array, n);
      break;
      case 'A':  aleatorio(array, n);
      break;
      default: aleatorio(array, n);*/
    }
	 
    //Mostrar o conjunto a ser ordenado
	 //mostrar(array, n);
		

    //Execucao do algoritmo de ordenacao
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
	 fim = clock();
  total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    


    //Mostrar o conjunto ordenado, tempo de execucao e status da ordenacao
	 //algoritmo.mostrar(array, n);
	 printf(" T: - %f s - O: %c.\n", total, ordem);
	 //printf("isOrdenado: %s\n", isOrdenado(array, n) ? "true" : "false");

    //Desalocar o espaco de memoria do array
    free(array);

}





//=============================================================================




int main(int argc, char **argv) {

    for(uint64_t i=10000000; i<=10000000; i=i*2){

       teste(i, 'C');
     //  teste(i, 'D');
      // teste(i, 'A');
    }
    


    return 0;
}
