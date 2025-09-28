#include <iostream>

class Calculator
{
private:
	float num1;
	float num2;
public:
	double add()
	{
		return num1 + num2;
	}
	double muliply()
	{
		return num1 * num2;
	}
	double subtract_1_2()
	{
		return num2 - num1;
	}
	double subtract_2_1()
	{
		return num1 - num2;
	}
	double divide_1_2()
	{
		return num1 / num2;
	}
	double divide_2_1()
	{
		return num2 / num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
		{
			return false;
		}
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Calculator calc;
	float n1, n2;
	while (true)
	{
		std::cout << "Введите num1: ";
		std::cin >> n1;
		while (!calc.set_num1(n1))
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> n1;
		}
		std::cout << "Введите num2: ";
		std::cin >> n2;
		while (!calc.set_num2(n2))
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num2: ";
			std::cin >> n2;
		}
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num1 * num2 = " << calc.muliply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_2_1() << std::endl;
	}
	return EXIT_SUCCESS;
}