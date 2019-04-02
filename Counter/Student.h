#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;



/*1.Student: Фамилия, Имя, Отчество, Дата рождения, Адрес, Телефон, Факультет, Курс.
Создать массив объектов.Вывести :
	a) список студентов заданного факультета;
	b) списки студентов для каждого факультета и курса;
	c) список студентов, родившихся после заданного года*/

class Student {
private:
	char surname[20];
	char name[20];
	char patronymic[20];

	class Date{
	public: //to get an access below
		int day, month, year;
	}date_of_birth;

	char address[30];
	char phone[20];
	char faculty[20];
	int curse;

public:
	void setSurname(const char*surname);
	void setName(const char*name);
	void setPatronymic(const char*patronymic);
	void setDate(int day, int month, int year);
	void setAddress(const char*address);
	void setPhone(const char*phone);
	void setFaculty(const char*faculty);
	void setCurse(int curse);
	void print();

	const char *getSurname();
	const char *getName();
	const char *getPatronymic();
	int getDateday();
	int getDatemonth();
	int getDateyear();
	const char *getAddress();
	const char *getPhone();
	const char *getFaculty();
	int getCurse();

	bool printStudentsByFaculty(const char* str);
	bool printStudentsByCurse(int curse);
	bool printStudentsByDate(int years);

};

