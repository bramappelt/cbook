#include <stdio.h>


int main(){
	int c;
	double nc;

	for (nc = 0; (c=getchar()) != EOF; ++nc){
		;
	}
	printf("Number of chars: %.0f\n", nc);
}
