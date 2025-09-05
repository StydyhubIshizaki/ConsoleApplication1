#include <iostream>
#include <string>

auto print(int a)
{
	std::cout << a << std::endl;
}

auto print(int* a)
{
	std::cout << a << std::endl;
}

int add(int a, int b)
{
	return a + b;
}

void sumPrint(int a)
{
	a = a + 20;
	print(a);
}

int sample(int* a)
{
	print(a);
	print(*a);
	*a = *a + 20;
	return *a;
}

int main()
{
	int x = 10;
	int z = sample(&x);
	print(z);
	print(x);
}