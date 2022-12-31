#pragma once
#include <string>
#include <iostream>
class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void AddContact(const std::string& name, int number);
	void SetContact(int index);
	const std::string GetName(int index)const;
	int GetNumber(int index)const;
	void ShowBook();

	bool operator>(PhoneBook& obj);
	bool operator>=(PhoneBook& obj);
	bool operator<(PhoneBook& obj);
	bool operator<=(PhoneBook& obj);

	const std::string& operator[](int index);
private:
	size_t _index;
	std::string* _name;
	int* _number;
};
