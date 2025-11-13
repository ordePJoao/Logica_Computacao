#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);
    
    for(int i=0; i<casos; i++){
        int x;
        scanf("%d", &x);
        
        int soma=0; 
        for(int j=1; j<x; j++){
            if(x%j==0){
                soma = soma +j;
            }
        }
        
        if(soma == x){
            printf("%d eh perfeito\n", x);
        }
        
        else{
            printf("%d nao eh perfeito\n", x);
        }
    }
	
	return 0;
}
