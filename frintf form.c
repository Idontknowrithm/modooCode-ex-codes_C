//printf 형식은 무엇인가?
#include <stdio.h>
int main() {
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n ", a);
	printf("b : %6.3f \n", b);
	printf("c : %5d \n", c);
	return 0;
}