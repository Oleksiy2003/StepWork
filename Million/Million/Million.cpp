#include<iostream>
#include<cstdlib>
#include<string>
#include <clocale>     
using namespace std;


using namespace std;

int main() {
	setlocale(0, "ukr");
	int answer;
	int Continue = 0;
	int menu = 0;
	int money = 0;

	cout << "1)New Game" << endl;
	cin >> menu;
	//----------------------------------------------------
	if (menu == 1) {

		cout << "First million" << endl;
		cout << "1.Сколько планет в Солнечной системе?" << endl << "1)2 планети 2)8 3)9" << endl;
		cin >> answer;
		switch (answer) {
		case 3:
			cout << "Ви виграли 500 гривень" << endl;
			money = money + 500;
			break;
		default:
			cout << "You lose with money: " << money << endl;
		}
	}

	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 500) {
			cout << "2.Где находится Тибет?" << endl << "1)Китай 2)Малехів 3)Дубляни" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 1000 грн" << endl;
				money = money + 1000;
				break;

			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}

		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	//----------------------------------------------------

	//----------------------------------------------------
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 1500) {
			cout << "3.Столица Аргентины?" << endl << "1)Буэнос-Айрес 2)Токіо 3)Дубляни" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 1500 грн" << endl;
				money = money + 1500;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}

		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}

	//----------------------------------------------------
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 3000) {
			cout << "4.В какой стране находится центр Европы?" << endl << "1)В Росии 2)В Украине 3)В Италии" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "Ви виграли 2000 грн" << endl;
				money = money + 2000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;

	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 5000) {
			cout << "5.В каком году началась Первая Мировая война?" << endl << "1)1941р 2)1914р 3)1932р" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "Ви виграли 3000 грн" << endl;
				money = money + 3000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}

	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 8000) {
			cout << "6. Кто придумал телефон? " << endl << "1)Т.Шевченко 2)І.Франко 3)А.Белл" << endl;
			cin >> answer;
			switch (answer) {
			case 3:
				cout << "Ви виграли 4000 грн" << endl;
				money = money + 4000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}

	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 12000) {
			cout << "7.Сколько звёзд на флаге США?" << endl << "1)51 2)49 3)50" << endl;
			cin >> answer;
			switch (answer) {
			case 3:
				cout << "Ви виграли 5000 грн" << endl;
				money = money + 5000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}

	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 17000) {
			cout << "8.Каким символом обозначают площадь?" << endl << "1)S 2)P 3)R" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 6000 грн" << endl;
				money = money + 6000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}



	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:

		if (money >= 23000) {
			cout << "9.Чему ровно число «Пи»?" << endl << "1)2 2)3.14 3)3.41" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "Ви виграли 7000 грн" << endl;
				money = money + 7000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 30000) {
			cout << "10.Сколько зубов у человека?" << endl << "1)32 2)36 3)38" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 8000 грн" << endl;
				money = money + 8000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 38000) {
			cout << "11.Кто придумал алфавит?" << endl << "1)Кирил и Мефодій 2)Т.Шевченко і Л.Українка 3)І.Козовий" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 9000 грн" << endl;
				money = money + 9000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:

		if (money >= 47000) {
			cout << "12.Как называется прямая, ограниченная точками?" << endl << "1)Відрізок 2)Гіпотенуза 3)Катет" << endl;
			cin >> answer;
			switch (answer) {
			case 1:

				cout << "Ви виграли 10000 грн" << endl;
				money = money + 10000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 57000) {
			cout << "13.Где находится самая большая статуя Иисусу Христу?" << endl << "1)Аргентина 2)Бразилія 3)Турція" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "Ви виграли 11000 грн" << endl;
				money = money + 11000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 68000) {
			cout << "14.Сколько заповедей в Библии? " << endl << "1)10 2)12 3)8" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Ви виграли 12000 грн" << endl;
				money = money + 12000;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	cout << "1)Продовжити гру 2)Завершити гру" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 80000) {
			cout << "15.Самая длинная река на Земле?" << endl << "1)Ніл 2)Волга 3)Полтва" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				money = money + 13000;
				cout << "Ви переможець!Ви виграли " << money << " грн" << endl;
				cout << "Ваш рахунок  " << money << "грн" << endl;
				break;
			default:
				cout << "Ви програли з рахунком: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "Ви забрали:" << money << "грн" << endl;
		break;
	}
	system("pause");
	return 0;
}