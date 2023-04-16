#include <stdio.h>

int main(void)
{
	int i, com = 44, spe = 32;
	for (i = 48; i <= 57; i++) {
		putchar(i);
		if (i != 57) {
			putchar(com);
			putchar(spe);
		}
	}
	putchar('\n');
	return(0);
}
