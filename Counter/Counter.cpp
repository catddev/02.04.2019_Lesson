#include "Counter.h"

Counter::Counter()
{
	cur_value = 0;//самому можно задать любое значение по умолчанию
}

Counter::Counter(int n)
{
	cur_value = n;
}

Counter::Counter(int c, int min, int max)
{
	min_value = min;
	max_value = max;
	if (c < min)
		cur_value = 0;
	else
		cur_value = c % max;
}

void Counter::setMin(int n)
{
	min_value = n;
}

void Counter::setMax(int n)
{
	max_value = n;
}

void Counter::Init(int n) //устанавливаем с какой секунды начать отсчет
{
		cur_value = n % max_value;
}

void Counter::increaseValue()
{
	cur_value++;
	if (cur_value == max_value) cur_value = 0;
}

int Counter::getCurrentValue()
{
	return cur_value;
}

