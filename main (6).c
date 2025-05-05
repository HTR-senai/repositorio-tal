/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char palavra1[50], palavra2[50];
    
    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);
    
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);
    
    if (strcmp(palavra1, palavra2) == 0){
        printf("String iguais\n");
    } else {
        printf("String diferentes.\n");
    }

    return 0;
}