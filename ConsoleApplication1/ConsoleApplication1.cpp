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

int main()
{
	int x = 10;
	int y = 20;
	int z = add(x, y);
	print(z);
}