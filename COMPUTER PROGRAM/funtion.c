#include <stdio.h>
int square(int x)
{
	return x*x;
	
}
int main(int argc, char** argv)
{
	printf("Enter A \n");
	int a;
	scanf("%d",a);
	printf("The square is %d",square(a));
	return 0;
}