#include <stdio.h>

long long calculadorLetalidade(long long *V, int Ncasos){
    if (Ncasos <= 1) {
        return 0;  // caso especial: só 1 vírus
    }

    // Ordenando vetor em ordem crescente
    for (int i = 0; i < Ncasos - 1; i++) {
        int menorIndice = i;
        for (int j = i + 1; j < Ncasos; j++) {
            if (V[j] < V[menorIndice]) {
                menorIndice = j;
            }
        }
        
        if (menorIndice != i) {
            long long aux = V[i];
            V[i] = V[menorIndice];
            V[menorIndice] = aux;
        }
    }

    if(Ncasos%2 != 0){ // se for impar
        V[Ncasos-2] = 0;
        for (int i = 0; i < Ncasos - 1; i++) { //Ordenando de novo
            int menorIndice = i;
            for (int j = i + 1; j < Ncasos; j++) {
                if (V[j] < V[menorIndice]) {
                    menorIndice = j;
                }
            }
        
            if (menorIndice != i) {
                long long aux = V[i];
                V[i] = V[menorIndice];
                V[menorIndice] = aux;
            }
        }
    }

    long long diferenca[Ncasos/2];
    for(int i=0; i < (Ncasos/2); i++){ //Fazendo a diferenca do maior do menor
        diferenca[i] = V[Ncasos - 1 - i] - V[i];
    }

    long long resultado=0;
    for(int i=0; i<Ncasos/2; i++){ //Fazendo a soma das diferencas
        resultado = resultado + diferenca[i];
    }
    
return resultado; 
}

int main() {
    int casos;
    while (scanf("%lld", &casos) != EOF) {
        long long Virus[1005];
        for (int i = 0; i < casos; i++) {
            scanf("%lld", &Virus[i]);
        }
        long long x = calculadorLetalidade(Virus, casos);
        printf("%lld\n", x);
    }
    
    return 0; }

/* #include <stdio.h>

long long calculadorLetalidade(int *V, int Ncasos){
    if (Ncasos == 1) {
        return 0;  // caso especial: só 1 vírus
    }
    
    // Zerando elemento sem par se Ncasos for ímpar
    if (Ncasos % 2 != 0) {
        V[Ncasos - 1] = 0;
    }
    
    long long soma[Ncasos/2 + 1];
    int indiceVetor = 0;
    
    // Calculando as somas dos pares
    for (int i = 0; i < Ncasos; i += 2) {
        soma[indiceVetor] = (long long)V[i] + (long long)V[i+1];
        indiceVetor++;
    }

    // Ordenando vetor soma em ordem decrescente
    for (int i = 0; i < indiceVetor - 1; i++) {
        int maiorIndice = i;
        
        for (int j = i + 1; j < indiceVetor; j++) {
            if (soma[j] > soma[maiorIndice]) {
                maiorIndice = j;
            }
        }
        
        if (maiorIndice != i) {
            long long aux = soma[i];
            soma[i] = soma[maiorIndice];
            soma[maiorIndice] = aux;
        }
    }

    // Calculando resultado (primeiro elemento menos a soma dos demais)
    long long resultado = soma[0];
    for (int i = 1; i < indiceVetor; i++) {
        resultado -= soma[i];
    }

    return resultado;
}

int main() {
    int casos;
    while (scanf("%d", &casos) != EOF) {
        int Virus[casos];
        for (int i = 0; i < casos; i++) {
            scanf("%d", &Virus[i]);
        }
        long long x = calculadorLetalidade(Virus, casos);
        printf("%lld\n", x);
    }
    
    return 0; } */