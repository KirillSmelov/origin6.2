#include "Counter.h"
#include <iostream>
void Counter::Inc()
{
	value++;
}
void Counter::Dec()
{
	value--;
}
int Counter::ShowValue()
{
	return value;
}
Counter::Counter()
{
	value = 1;
}
Counter::Counter(int value)
{
	this->value = value;
}
void Command(Counter& counter)
{
	char symbol = '0';
	while (symbol != 'x')
	{
		std::cout<< "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symbol;
		switch (symbol)
		{
		case '+': {counter.Inc(); break; }
		case '-': {counter.Dec(); break; }
		case '=': {std::cout<<counter.ShowValue()<<std::endl; break; }
		case 'x': {std::cout << "До свидания!"; break; }
		}
	}
}