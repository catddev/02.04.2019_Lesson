#include"Counter.h"

//int main() {
//	Counter c; //при таком объявлении объекта (без заданных параметров), вызывается констурктор по умолчанию
//	
//	c.setMin(0);
//	c.setMax(60);
//	c.Init(59);
//	c.increaseValue(); //увеличит на 1, и секундомер с 59 снова станет 0
//	cout << c.getCurrentValue() << endl;
//
//	c.Init(5);
//	c.increaseValue();
//	cout << c.getCurrentValue() << endl;
//
//	c.Init(63);
//	c.increaseValue();
//	cout << c.getCurrentValue() << endl;
//
//	Counter c1(15); //здесь вызывается конструктор с параметром
//	c1.increaseValue();
//	cout << c1.getCurrentValue() << endl;
//
//	Counter c2(95, 0, 60);
//	c2.increaseValue();
//	cout << c2.getCurrentValue() << endl;
//
//	int a, b, cc; //нельзя просто с, а то сверху есть переменная Counter c;
//	cin >> a >> b >> cc;
//	Counter cn(a, b, cc);
//	cn.increaseValue();
//	cout << cn.getCurrentValue() << endl;
//
//
//	system("pause");
//}