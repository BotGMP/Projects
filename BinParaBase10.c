#include <stdio.h>
#include <math.h>

int numLenght ( int n){
	if ( n < 10) return 1;
	return 1 + numLenght ( n/10);
}

int main() {
	
	int bin;
	int decimal = 0;
	int length;
	int i;
	int temp;
		
	printf("Insira um binario: \n");
	scanf("%d", &bin);
	length = numLenght(bin);

	printf("%d \n", length);

    for(i = length; bin > 0; i-- ){
		temp = (bin / pow(10, i - 1));
		decimal = decimal + temp * pow(2, i - 1);
		bin = (bin % (int)pow(10, i - 1));
}

	printf("O número em base 10 é: %d \n", decimal);
	
	return 0;
}
