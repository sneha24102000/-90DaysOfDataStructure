//pointer

//declaration *ptr
//int a=100(declaration and initialization)
//int *ptr(declaring integer type pointer)
//ptr=&a(storing the address into pointer)

#include<iostream>
using namespace std;

int main()
{
	int a = 1000;
	int *ptr;
	ptr=&a;
	
	printf("%d\n",a); //prints value of a
	printf("%d\n",&a); //prints the address of a
	printf("%d\n",ptr); //prints value of ptr
	printf("%d\n",*ptr); //prints value of a
	
}

