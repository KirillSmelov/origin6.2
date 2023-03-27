#include <iostream>
#include<string>
#include<windows.h>
#include "Counter.h"

int main(int argc, char** argv)
{
	system("chcp 1251");
	std::string answer;
	std::cout << "Вы хотите указать начальное значение счетчику? Введите да или нет: ";
	std::cin >> answer;
	if (answer == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		int Init = 0;
		std::cin >> Init;
		Counter counter(Init);
		Command(counter);
	}
	else
	{
		Counter counter;
		Command(counter);
	}
	return 0;
}