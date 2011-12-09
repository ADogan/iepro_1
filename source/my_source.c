#include "my_header.h"

void print_hello_world()
{
	iprintf("Hello World");
}
void loop()
{
	while (1){}
}

int main()
{
	consoleDemoInit();
	print_hello_world();
	loop();
	return 0;
}
