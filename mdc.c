#include <stdio.h>

int mdc(int a, int b){
	if(b == 0){
		return a;
	}
	return mdc(b, a%b);
}

int main(){
	int a, b;
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	printf("MDC:  %d", mdc(a,b));
	return 0;
}
