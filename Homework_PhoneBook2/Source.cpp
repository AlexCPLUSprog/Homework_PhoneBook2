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
	
	std::cout << "������ ��������� ������ �����:\n";
	b1.ShowBook();
	std::cout  << "������ ��������� ������ �����:\n";
	b2.ShowBook();
	size_t n,m;
	std::cout << "������� ����� �������� ������ �����: ";
	std::cin >> n;
	b1.SetContact(n - 1);
	b1.ShowBook();
	std::cout << "������� ����� �������� ������ �����: ";
	std::cin >> m;
	b2.SetContact(m - 1);
	b2.ShowBook();
	std::cout << "=================\n";	
	if (b1 > b2)
		std::cout << "���������� ����� �1 ������ ������";
	else
		std::cout << "���������� ����� �2 ������ ������";
	return 0;
}