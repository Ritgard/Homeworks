#include <iostream>
#include <string>

using namespace std;

struct BankAccount
{
	int numberAccounts{};
	string accountName{};
	float countMoney{};
};

void changeBankAccount(BankAccount& b, float newSum);

int main()
{
	setlocale(LC_ALL, "rus");

	float newSum{};
	BankAccount first;
	cout << "Введите номер счета: ";
	cin >> first.numberAccounts;
	cin.ignore();
	cout << "Введите имя владельца: ";
	getline(cin, first.accountName);
	cout << "Введите баланс: ";
	cin >> first.countMoney;
	cout << "Введите новый баланс: ";
	cin >> newSum;
	changeBankAccount(first, newSum);
	cout << "Ваш счет: " << first.accountName << ", " << first.numberAccounts << ", " << first.countMoney << endl;

	return EXIT_SUCCESS;
}
void changeBankAccount(BankAccount& b, float newSum)
{
	b.countMoney += newSum;
}