#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
	int a,b;
	printf("ENTER YOUR  NUMBERS: \n");
	scanf("%d",a);
	scanf("%d",b);
    int result = multiply(a, b);
    printf("Product: %d\n", result);
    return 0;
}