#include <stdio.h>

int ContaDigitos(int num){
	int cont = 0;
	while(num > 0){
		num /= 10;
		cont++;
	}
	return cont;
}

void EuclidesEstendido(int a, int b){
	int r1 = a, r2 = b, m1 = 1, m2 = 0, n1 = 0, n2 = 1;
	int q = 0, r3 = 0, m3 = 0, n3 = 0;
	
	printf("R     Q     m     n\n");
	printf("%d    %d    %d    %d\n", r1, 0, m1, n1);
	printf("%d    %d    %d    %d\n", r2, 0, m2, n2);
	
	while(r2 != 0){
		q = r1/r2;
		r3 = r1 - (q * r2);
		m3 = m1 - (q * m2);
		n3 = n1 - (q * n2);
		r1 = r2;
		m1 = m2;
		n1 = n2;
		r2 = r3;
		m2 = m3;
		n2 = n3;
		
		printf("%d   %d   %d   %d\n", r3, q, m3, n3);
	}
	
}

int main(){
	int a, b;
	printf("Digite inteiros a e b: ");
	scanf("%d %d", &a, &b);
	EuclidesEstendido(a, b);
	return 0;
}
