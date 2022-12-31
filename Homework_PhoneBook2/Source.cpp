#include "PhoneBook.h"

int main() {
	setlocale(0, "ru");
	std::string name = "Alexandr", name2 = "Mickel", name3 = "Andrew", name4 = "Bob", name5 = "Jack";
	PhoneBook b1, b2;
	b1.AddContact(name, 1121321);
	b1.AddContact(name2, 2225232);
	b1.AddContact(name3, 3535352);
	b2.AddContact(name4, 8768678);
	b2.AddContact(name5, 7645644);
	
	std::cout << "Список контактов первой книги:\n";
	b1.ShowBook();
	std::cout  << "Список контактов второй книги:\n";
	b2.ShowBook();
	size_t n,m;
	std::cout << "Введите номер контакта первой книги: ";
	std::cin >> n;
	b1.SetContact(n - 1);
	b1.ShowBook();
	std::cout << "Введите номер контакта второй книги: ";
	std::cin >> m;
	b2.SetContact(m - 1);
	b2.ShowBook();
	std::cout << "=================\n";	
	if (b1 > b2)
		std::cout << "Телефонная книга №1 больше второй";
	else
		std::cout << "Телефонная книга №2 больше первой";
	return 0;
}