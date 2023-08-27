#include <stdio.h>
#include <stdlib.h>

verifica_numero_primo(int n){
int i;
if(n<=1){
    printf("0");
}else{
    for(i=2; i< n; i++){
        if(n%i==0){
            printf("0");
            break;
        }
    }
    if(i==n){
        printf("1");
    }
}

}
int main(){
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);
    verifica_numero_primo(n);
}











