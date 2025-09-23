#include <iostream>

using namespace std;

enum class Months
{
	january = 1,
	february,
	march,
	april, 
	may,
	june,
	july,
	august,
	september,
	october,
	november, 
	december
};

int main()
{
	setlocale(LC_ALL, "rus");
	int num{};
	do
	{
		cout << "Введите номер месяца: ";
		cin >> num;
		Months month = static_cast<Months>(num);
		switch (month)
		{
		case Months::january: cout << "Январь" << endl; break;
		case Months::february: cout << "Февраль" << endl; break;
		case Months::march: cout << "Март" << endl; break;
		case Months::april: cout << "Апрель" << endl; break;
		case Months::may: cout << "Май" << endl; break;
		case Months::june: cout << "Июнь" << endl; break;
		case Months::july: cout << "Июль" << endl; break;
		case Months::august: cout << "Август" << endl; break;
		case Months::september: cout << "Сентябрь" << endl; break;
		case Months::october: cout << "Октябрь" << endl; break;
		case Months::november: cout << "Ноябрь" << endl; break;
		case Months::december: cout << "Декабрь" << endl; break;
		}
		if (num < 0 || num > 12)
		{
			std::cout << "Не правильный номер!" << endl;
		}
	} while (num != 0);
	cout << "До свидания!" << endl;
	return EXIT_SUCCESS;
}