#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	int somma = 0;
	for (a=1; a <= 3; a++)
	{
		if (a % 2 == 1)
		 { somma = somma + 3; }
	}
	printf("il valore e\': %d\n", somma);
}
