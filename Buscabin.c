#include<stdio.h>



int Bbin(int *vector, int begin, int end, int item)

{

    /* Índice do meio */

    int i = (begin + end) / 2;



    if (begin >= end) {  /* Ponto de parada. Item não está no vetor */


        return i;

    }



    if (vector[i] == item) {  /* Item encontrado */
        printf("nao ha invervalo valido");
        return i;

    }



    if (vector[i] < item) {  /* Item está no sub-vetor à direita */

        return Bbin(vector, i + 1, end, item);





    } else {  /* vector[i] > item. Item está no sub-vetor à esquerda */

        return Bbin(vector, begin, i - 1, item);

    }

}


void final1(int *vector, int i , int x){
    if(x>vector[i]){
    printf("%d %d", vector[i], vector[i+1]);
    }
    else {
            printf("%d %d", vector[i-1], vector[i]);
    }
}


int main(){



     int x, n, fin;



     scanf("%d %d", &x, &n);



     int v[n];



     for(int i=0;i<n;i++){

        scanf("%d", &v[i]);

     }

     if (x<v[0]||x>v[n-1]){

        printf("nao ha intervalo valido");

     }

     else{

        fin = Bbin(v, 0, n-1, x);
        final1(v, fin, x);


     }





 return 0;

}
