#include <stdio.h>
int main (){
    char caractere1,caractere2,caractere3,caractere4,caractere5,caractere6;
    caractere1 = getchar();
    caractere2 = getchar(),
    caractere3 = getchar();
    printf("A primeira palavra é: %c%c%c\n",caractere1,caractere2,caractere3);
    caractere4 = getchar();
    caractere5 = getchar(),
    caractere6 = getchar();
    printf("A segunda palavra é : %c%c%c\n",caractere4,caractere5,caractere6);
    return(0);
}

