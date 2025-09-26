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

int sample2(int& a)
{
	print(a);
	a = a + 20;
	return a;
}

//int main()
//{
//	int x = 10;
//	//int z = sample(&x);
//	int z = sample2(x);
//	print(z);
//	print(x);
//}

int main()
{
	std::string type;
	int weight = 0;
	int time = 0;
	int calories = 0;

	// 運動タイプを入力してもらう
	std::cout << "運動タイプを入力してください（runnning / walking / cycling）" << std::endl;
	std::cin >> type;

	// 体重を入力してもらう
	std::cout << "体重を入力してください" << std::endl;
	std::cin >> weight;

	// 運動時間（分数）を入力してもらう
	std::cout << "運動時間（分数）を入力してください" << std::endl;
	std::cin >> time;

	// 運動タイプを判定する
	if (type == "running")
	{
		calories = 9 * weight * time * 1.05 / 60;
	}
	else if (type == "walking")
	{
		calories = 3 * weight * time * 1.05 / 60;
	}
	else if (type == "cycling")
	{
		calories = 5 * weight * time * 1.05 / 60;
	}
	else
	{
		std::cout << "運動タイプを入力してください（runnning / walking / cycling）";
	}

	std::cout << "消費カロリーは" + calories + "です。";
}