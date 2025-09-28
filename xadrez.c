    #include <stdio.h>
    
    int main() {





    // Movimento do bispo com while
    int casa_bispo = 1;
    
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n");
        casa_bispo++;
    }    

  // Movimento da rainha com do-while
    int casa_rainha = 1;
    
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha <= 8);







      return 0;
}