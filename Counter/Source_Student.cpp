#include"Student.h"

int cur_size = 0, buf_size = 0;
void add(Student*&ss, Student el) {
	if (buf_size == 0)
	{
		buf_size = 4;
		ss = new Student[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			Student*tmp1 = new Student[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp1[i] = ss[i];
			delete[] ss;
			ss = tmp1;
		}
	}
	ss[cur_size++] = el;
}



int main() {
	setlocale(LC_ALL, "Rus");

	ifstream in_file("in.txt");
	Student *ss = 0;
	Student tmp;
	char str_tmp[20];
	int tday, tmonth, tyear, tcurse;
	if (!in_file)
		cerr << "File open error" << endl;
	else
	{
		while (!in_file.eof())
		{
			in_file >> str_tmp;
			tmp.setSurname(str_tmp);

			in_file >> str_tmp;
			tmp.setName(str_tmp);

			in_file >> str_tmp;
			tmp.setPatronymic(str_tmp);

			in_file >> tday >> tmonth >> tyear;
			tmp.setDate(tday, tmonth, tyear);

			in_file >> str_tmp;
			tmp.setAddress(str_tmp);

			in_file >> str_tmp;
			tmp.setPhone(str_tmp);

			in_file >> str_tmp;
			tmp.setFaculty(str_tmp);

			in_file >> tcurse;
			tmp.setCurse(tcurse);

			add(ss, tmp);
		}
		int n;
		cout << "Enter curse: ";
		cin >> n;
		cout << "your curse's students:" << endl;
		for (int i = 0; i < cur_size; i++)
			if (ss[i].printStudentsByCurse(n))
				ss[i].print();
	}
	
	system("pause");
}