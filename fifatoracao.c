#include <stdio.h>

int Fifatoracao(int n){
	int primo = 2, fi = 0, cont = 0;
	fi = n;
	while(n > 1){
		cont = 0;
		while((n % primo) == 0){
			cont++;
			n = n/primo;
		}
		if(cont > 0){
			fi = fi * (1 - 1/(float)primo);
		}
		
		primo++;
	}
	
	return fi;
	
}

int main(){
	int n;
	printf("Digite um inteiro n\n");
	scanf("%d", &n);
	
	printf("Euller de n: %d ", Fifatoracao(n));
	
	return 0;
}
