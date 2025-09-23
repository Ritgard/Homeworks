#include <iostream>
#include <string>

using namespace std;

struct CityInfo
{
	string nameCity{};
	string nameStreet{};
	int numberHouse{};
	int numberApartment{};
	int index{};
};

void viewStruct(const CityInfo& a);

int main()
{
	setlocale(LC_ALL, "rus");
	CityInfo one{ "Москва", "Арбат", 123, 55555, 9922831 };
	CityInfo two{ "Санкт-Петербург", "Невский проспект", 0, 1, 1983291 };
	viewStruct(one);
	cout << endl;
	viewStruct(two);

	return EXIT_SUCCESS;
}
void viewStruct(const CityInfo& a)
{
	cout << "Город: " << a.nameCity << endl;
	cout << "Улица: " << a.nameStreet << endl;
	cout << "Номер дома: " << a.numberHouse << endl;
	cout << "Номер квартиры: " << a.numberApartment << endl;
	cout << "Индекс: " << a.index << endl;
}