#include <stdio.h>

int main() {

	int x, z;
	scanf("%d", &x);
    scanf("%d", &z);
    
	while(x>=z) {
		scanf("%d", &z);
	}

	long long int soma=x;
	int n=1;
	for(int i=x+1; soma<=z; i++) {
		soma = soma + i;
		n++;
	}

	printf("%d\n", n);

	return 0;
}