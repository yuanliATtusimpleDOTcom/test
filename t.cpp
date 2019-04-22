#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <new>


class Test {
public:
	Test() { b = 3; }
	void print() { 
		printf("inner this: %p\n", this);	       
	}
public:
	int b;
	static int a;
};


int main(int argc, char *argv[])
{

	Test *test = new Test();
	test->print();

	
	printf("test new instance addr  %p\n", test);
	printf("b addr %p", &(test->b));	
	delete test;

	return 0;
}
