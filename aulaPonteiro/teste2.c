#include <stdio.h>

int main() {
	int vet[5] = {1, 2, 3, 4, 5};
	int *p;
	p = vet;

	printf("Terceiro elemento: %d ou %d\n", p[2], *(p+2));

	return 0;
}
