#include <stdio.h>

int DivisoresFatoracao(int n){
	int p = 2, d = 1, cont = 0;
	while(n > 1){
		cont = 0;
		while((n % p) == 0){
			n /= p;
			cont++;
		}
		if(cont > 0){
			d *= (cont + 1);
		}
		p++;
	}
	
	return d;
}


int main(){
	int n = 0;
	printf("Digite um numero  n\n");
	scanf("%d", &n);
	printf("Numeros de divisores do %d eh %d\n", n, DivisoresFatoracao(n));
	return 0;
}
