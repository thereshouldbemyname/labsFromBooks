
#include <string>
#include <iostream>
#include <iomanip>


void skip()
{
	std::cout << "\n";
}

int main()
{
	const int r1w = 82;					// Длина верхней рамки
	const int r2w = 2;					// Длина боковой рамки
	std::string ramka1(r1w, 'X');		// Заполнение 'X'
	std::string ramka2(r2w, 'X');
	int num = 0;						// Буфер для вывода

	std::cout << ramka1 <<std::endl;	// Вывод верхней рамки
	
	// Таблица до 5
	for (int i = 1; i < 11; i++)
	{
		std::cout << ramka2;			// Вывод боковой
		for (int j = 1; j < 6; j++)
		{
			num = j * i;
			std::cout << std::right << std::setw(3) << j << " * " << std::left << std::setw(3) << i << "= " << num << "\t";
			if (j == 5)
				std::cout << ramka2 << std::endl;;
		}
	}
	std::cout << std::left << std::setw(r1w - 2) << ramka2 << ramka2 << std::endl;				// Средняя линия где ничего нет

	// Таблица 6-10
	for (int i = 1; i < 11; i++)
	{
		std::cout << ramka2;
		for (int j = 6; j < 11; j++)
		{
			num = j * i;
			std::cout << std::right << std::setw(3) << j << " * " << std::left << std::setw(3) << i << "= " << num << "\t";
			if (j == 10)
				std::cout << ramka2 << std::endl;;
		}
	}
	std::cout << ramka1 << std::endl;

	return 0;
}

