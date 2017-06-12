#include <stdio.h>

int main(int argc, char const* argv[]) {
	printf("HelloWorld!\n");
	hello("masa");
	return 0;
}

void hello(chae *name){
	printf("%s!!\n", name);
}
