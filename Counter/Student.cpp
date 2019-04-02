#include"Student.h"

void Student::setSurname(const char * surname)
{
	strcpy_s(this->surname, surname); //this обращает в эту переменную
}

void Student::setName(const char * name)
{
	strcpy_s(this->name, name);
}

void Student::setPatronymic(const char * patronymic)
{
	strcpy_s(this->patronymic, patronymic);
}

void Student::setDate(int day, int month, int year)
{
	date_of_birth.day = day;
	date_of_birth.month = month;
	date_of_birth.year = year;
}

void Student::setAddress(const char * address)
{
	strcpy_s(this->address, address);
}

void Student::setPhone(const char * phone)
{
	strcpy_s(this->phone, phone);
}

void Student::setFaculty(const char * faculty)
{
	strcpy_s(this->faculty, faculty);
}

void Student::setCurse(int curse)
{
	this->curse = curse;
}

const char * Student::getSurname()
{
	return surname;
}

const char * Student::getName()
{
	return name;
}

const char * Student::getPatronymic()
{
	return patronymic;
}

int Student::getDateday()
{
	return date_of_birth.day;
}

int Student::getDatemonth()
{
	return date_of_birth.month;
}

int Student::getDateyear()
{
	return date_of_birth.year;
}

const char * Student::getAddress()
{
	return address;
}

const char * Student::getPhone()
{
	return phone;
}

const char * Student::getFaculty()
{
	return faculty;
}

int Student::getCurse()
{
	return curse;
}

bool Student::printStudentsByFaculty(const char*str)
{
	if (strcmp(faculty, str) == 0)
		return true;
	else
		return false;
}

bool Student::printStudentsByCurse(int n)
{
	return (curse == n);
}

bool Student::printStudentsByDate(int years)
{
	if (date_of_birth.year > years)
		return true;
	else
		return false;
}
void Student::print()
{
	cout << surname << " " << name << " " << patronymic << " ";
	cout << date_of_birth.day << "/" <<date_of_birth.month << "/" << date_of_birth.year;
	cout << address << " " << phone << " " << faculty << " " << curse << endl;
}

