#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char digit() {
	char c = rand() % 36;
	return c + (c < 10 ? '0' : 'A'-10);
}

int main(int argc, char **argv) {

	srand(time(NULL));

	while(1) {
		int n, r = (rand() % 3) + 2;
		for (n=0; n<r; ++n) {
			printf("%c", digit());
		}
		printf(" %c%c%c\n", digit(), digit(), digit());
	}
}
