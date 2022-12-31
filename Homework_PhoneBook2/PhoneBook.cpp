#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	_index = 0;
	_name = new std::string[_index];
	_number = new int[_index];
}

PhoneBook::~PhoneBook() {
	delete[] _name;
	delete[] _number;
}

void PhoneBook::AddContact(const std::string& name, int number) {

	std::string* newName = new std::string[_index + 1];
	int* newNum = new int[_index + 1];
	for (size_t i = 0; i < _index; i++) {
		newName[i] = _name[i];
		newNum[i] = _number[i];
	}
	newName[_index] = name;
	newNum[_index] = number;
	delete[] _name;
	_name = newName;
	delete[] _number;
	_number = newNum;
	_index++;
}

void PhoneBook::SetContact(int index) {
	std::string newName;
	int newNumber;
	std::cout << "Контакт: " << _name[index] << "\t" << _number[index] << '\n';
	std::cout << "Введите новое имя ->";
	std::cin >> _name[index];
	std::cout << "Введите новый номер ->";
	std::cin >> _number[index];
}

const std::string PhoneBook::GetName(int index) const {
	return _name[index];
}

int PhoneBook::GetNumber(int index) const {
	return _number[index];
}

void PhoneBook::ShowBook() {
	for (size_t i = 0; i < _index; i++) {
		std::cout << i+1 << ". " << _name[i] << '\t' << _number[i] << '\n';
	}
	std::cout << std::endl;
}


bool PhoneBook::operator>(PhoneBook& obj) {
	return _name->length() > obj._name->size();
}

bool PhoneBook::operator>=(PhoneBook& obj) {
	return _name->size() >= obj._name->size();
}

bool PhoneBook::operator<(PhoneBook& obj) {
	return _name->size() < obj._name->size();
}

bool PhoneBook::operator<=(PhoneBook& obj) {
	return _name->size() <= obj._name->size();
}

const std::string& PhoneBook::operator[](int index) {
	return _name[index];
}

