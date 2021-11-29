#include "main.h"

int main()
{
	double a;
	double b;
	double c;

	std::cout << "Enter three numbers to calculate: " << std::endl;
	while (std::cin >> a >> b >> c)
	{
		Calculate(a, b, c);
		std::cout << "Enter three numbers to calculate: " << std::endl;
	}

    return 0;
}

void Calculate(double a, double b, double c)
{
	if (a == 0)
	{
		if (b == 0)
			std::cout << "No Root" << std::endl;
		else
			std::cout << "x == " << -c / b << std::endl;
	}
	else if (b == 0)
	{
		double div = -c / a;

		if (div == 0)
			std::cout << "x == 0" << std::endl;
		else if (div < 0)
			std::cout << "0 Real Roots" << std::endl;
		else
			std::cout << "2 Real Roots: " << sqrt(div) << " and " << -sqrt(div) << std::endl;
	}
	else
	{
		double sqRoot = b * b - 4 * a * c;

		if (sqRoot == 0)
			std::cout << "1 Real Root: " << -b / (2 * a) << std::endl;
		else if (sqRoot < 0)
			std::cout << "0 Real Roots" << std::endl;
		else
			std::cout << "2 Real Roots: " << std::setprecision(12) << (-b + sqrt(sqRoot)) / (2 * a) << " and " << (-b - sqrt(sqRoot)) / (2 * a) << std::endl;
	}
}