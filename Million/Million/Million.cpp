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
		cout << "1.������� ������ � ��������� �������?" << endl << "1)2 ������� 2)8 3)9" << endl;
		cin >> answer;
		switch (answer) {
		case 3:
			cout << "�� ������� 500 �������" << endl;
			money = money + 500;
			break;
		default:
			cout << "You lose with money: " << money << endl;
		}
	}

	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 500) {
			cout << "2.��� ��������� �����?" << endl << "1)����� 2)������� 3)�������" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 1000 ���" << endl;
				money = money + 1000;
				break;

			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}

		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	//----------------------------------------------------

	//----------------------------------------------------
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 1500) {
			cout << "3.������� ���������?" << endl << "1)������-����� 2)���� 3)�������" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 1500 ���" << endl;
				money = money + 1500;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}

		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}

	//----------------------------------------------------
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 3000) {
			cout << "4.� ����� ������ ��������� ����� ������?" << endl << "1)� ����� 2)� ������� 3)� ������" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "�� ������� 2000 ���" << endl;
				money = money + 2000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;

	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 5000) {
			cout << "5.� ����� ���� �������� ������ ������� �����?" << endl << "1)1941� 2)1914� 3)1932�" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "�� ������� 3000 ���" << endl;
				money = money + 3000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}

	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 8000) {
			cout << "6. ��� �������� �������? " << endl << "1)�.�������� 2)�.������ 3)�.����" << endl;
			cin >> answer;
			switch (answer) {
			case 3:
				cout << "�� ������� 4000 ���" << endl;
				money = money + 4000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}

	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 12000) {
			cout << "7.������� ���� �� ����� ���?" << endl << "1)51 2)49 3)50" << endl;
			cin >> answer;
			switch (answer) {
			case 3:
				cout << "�� ������� 5000 ���" << endl;
				money = money + 5000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}

	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 17000) {
			cout << "8.����� �������� ���������� �������?" << endl << "1)S 2)P 3)R" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 6000 ���" << endl;
				money = money + 6000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}



	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:

		if (money >= 23000) {
			cout << "9.���� ����� ����� ���?" << endl << "1)2 2)3.14 3)3.41" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "�� ������� 7000 ���" << endl;
				money = money + 7000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 30000) {
			cout << "10.������� ����� � ��������?" << endl << "1)32 2)36 3)38" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 8000 ���" << endl;
				money = money + 8000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 38000) {
			cout << "11.��� �������� �������?" << endl << "1)����� � ������ 2)�.�������� � �.������� 3)�.�������" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 9000 ���" << endl;
				money = money + 9000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:

		if (money >= 47000) {
			cout << "12.��� ���������� ������, ������������ �������?" << endl << "1)³����� 2)ó�������� 3)�����" << endl;
			cin >> answer;
			switch (answer) {
			case 1:

				cout << "�� ������� 10000 ���" << endl;
				money = money + 10000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 57000) {
			cout << "13.��� ��������� ����� ������� ������ ������ ������?" << endl << "1)��������� 2)������� 3)������" << endl;
			cin >> answer;
			switch (answer) {
			case 2:
				cout << "�� ������� 11000 ���" << endl;
				money = money + 11000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 68000) {
			cout << "14.������� ��������� � ������? " << endl << "1)10 2)12 3)8" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "�� ������� 12000 ���" << endl;
				money = money + 12000;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	cout << "1)���������� ��� 2)��������� ���" << endl;
	cin >> Continue;
	switch (Continue) {
	case 1:
		if (money >= 80000) {
			cout << "15.����� ������� ���� �� �����?" << endl << "1)ͳ� 2)����� 3)������" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				money = money + 13000;
				cout << "�� ����������!�� ������� " << money << " ���" << endl;
				cout << "��� �������  " << money << "���" << endl;
				break;
			default:
				cout << "�� �������� � ��������: " << money << endl;
			}
		}
		cin >> answer;
		break;
	case 2:
		cout << "�� �������:" << money << "���" << endl;
		break;
	}
	system("pause");
	return 0;
}