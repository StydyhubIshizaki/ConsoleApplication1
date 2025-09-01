#include <iostream>
#include <string>

int main()
{
    double weight{};
    double time{};


	std::cout << "Enter weight in kilograms: ";
    std::cin >> weight;

	std::cout << "Enter time in minutes: ";
    std::cin >> time;

	double walking = 3 * weight * time *1.05 /60;
    
	std::cout << walking << " calories burned\n";
}