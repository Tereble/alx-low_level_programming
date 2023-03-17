#include <stdio.h>
int main(void) {
	static const char hello[] = "and that piece of art is useful\" \- Dora Korpar, 2015\-10\-19\n";
	fwrite(hello, stderr);
	return(1);
}
