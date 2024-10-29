#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>

#if defined(max)
#undef max
#endif 

// Учетные записи
bool isAdmin = false;
int userCount = 2;
std::string* loginArr = new std::string[userCount]{ "Farit", "Nichtozhestvo" };
std::string* passwordArr = new std::string[userCount]{ "Farit", "Nichtozhestvo" };
//-----------------------------

int size = 10;
int* idArr = new int[size];
int* countArr = new int[size];
double* priceArr = new double[size];
std::string* nameArr = new std::string[size];



//-----------------------------
// Функции
void Start();
bool Login();
void ShopUserMenu();
void ShopFaritMenu();

int main()
{
	Start();

	delete[]loginArr;
	delete[]passwordArr;

	return 0;
}

void Start()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\n\n\t\t\tФаритовская заначка\n\n\n";
	if (Login() == true)
	{
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max());
		if (isAdmin == true)
		{
			ShopFaritMenu();
		}
		else
		{
			ShopUserMenu();
		}
	}

}

bool Login()
{
	while (true)
	{
		std::string login, pass;
		std::cout << "Введите лохин: ";
		std::getline(std::cin, login, '\n');
		std::cout << "Введите пахоль: ";
		std::getline(std::cin, pass, '\n');

		for (int i = 0; i < userCount; i++)
		{
			if (login == loginArr[0] && pass == passwordArr[0])
			{
				std::cout << "Добро " << loginArr[0] << '\n';
				isAdmin = true;
				return true;
			}
			else if (login == loginArr[i] && pass == passwordArr[i])
			{
				std::cout << "Добро " << loginArr[i] << '\n';
				isAdmin = false;
				return true;
			}
		}
	}

}

void ShopUserMenu()
{

	std::string choose{};

	while (true)
	{
		do
		{
			std::cout << "1. Начать продажу\n";
			std::cout << "2. Показать склад\n";
			std::cout << "3. Пополнить склад\n";
			std::cout << "4. Отчет о прибыли\n\n";
			std::cout << "0. Закрыть смену\n";

			std::cout << "Вводи блин: ";
			std::getline(std::cin, choose, '\n');
			// добавуление акции
		} while (choose.size() > 1 || choose[0] < 48 || choose[0] > 56); // 48-56 

		if (choose == "1")
		{

		}
		else if (choose == "2")
		{

		}
		else if (choose == "3")
		{

		}
		else if (choose == "4")
		{

		}
		else if (choose == "5")
		{

		}
		else if (choose == "6")
		{

		}
		else if (choose == "7")
		{

		}
		else if (choose == "8")
		{

		}
		else if (choose == "0")
		{

			break;
		}
		else
		{
			std::cerr << "ошибОЧКА";
		}

}

void ShopFaritMenu()
{
	std::string choose{};

	while (true)
	{
		do
		{
			std::cout << "1. Начать продажу\n";
			std::cout << "2. Показать склад\n";
			std::cout << "3. Пополнить склад\n";
			std::cout << "4. Списать со склада\n";
			std::cout << "5. Изменить цену\n";
			std::cout << "6. Изменить склад\n";
			std::cout << "7. изменить сотрудника\n";
			std::cout << "8. Отчет о прибыли\n\n";
			std::cout << "0. Закрыть смену\n";

			std::cout << "Вводи блин: ";
			std::getline(std::cin, choose, '\n');
			// добавуление акции
		} while (choose.size() > 1 || choose[0] < 48 || choose[0] > 56); // 48-56 

		if (choose == "1")
		{

		}
		else if (choose == "2")
		{

		}
		else if (choose == "3")
		{

		}
		else if (choose == "4")
		{

		}
		else if (choose == "5")
		{

		}
		else if (choose == "6")
		{

		}
		else if (choose == "7")
		{

		}
		else if (choose == "8")
		{

		}
		else if (choose == "0")
		{

			break;
		}
		else
		{
			std::cerr << "ошибОЧКА";
		}
	}

}