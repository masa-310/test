#include <stdio.h>

int main(int argc, char const* argv[]) {
	printf("HelloWorld!\n");
	hello("masa");
	hello("shun")
	return 0;
}

void hello(char *name){
	printf("%s!!\n", name);
}
