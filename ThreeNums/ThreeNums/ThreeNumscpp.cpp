#include<iostream>
#include<cstdlib>
#include<string>
#include <iomanip>  
#include <clocale>     
using namespace std;
int main() {
	setlocale(LC_ALL,"ukr");
	int a,b,c,d;
	cin >> a;
	b = a / 100;
	c = (a / 10) % 10;
	d = (a/1)%10;
	
	if (a < 100 || a>999) {
		cout <<"�� ����� ����������� �����,������ ����� �� 100 �� 999"<< endl;
	}

	switch (b) {
	case 1:
		cout << "���" << endl;
		break;
	case 2:
		cout << "�����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "���������" << endl;
		break;
	case 5:
		cout << "�'�����" << endl;
		break;
	case 6:
		cout << "س�����" << endl;
		break;
	case 7:
		cout << "ѳ����" << endl;
		break;
	case 8:
		cout << "³�����" << endl;
		break;
	case 9:
		cout << "���'�����" << endl;
		break;
	}
	switch (c) {
	case 1:
		if (c == 1) {
			switch (d)
			{
			case 1:
				cout <<"����������"<< endl;
          break;
			case 2:
				cout << "����������" << endl;
				break;
			case 3:
				cout << "����������" << endl;
				break;
			case 4:
				cout << "������������" << endl;
				break;
			case 5:
				cout << "�'���������" << endl;
				break;
			case 6:
				cout << "�����������" << endl;
				break;
			case 7:
				cout << "���������" << endl;
				break;
			case 8:
				cout << "����������" << endl;
				break;
			case 9:
				cout << "���'���������" << endl;
				break;
			}
		}
	break;
	case 2:
		cout << "��������" << endl;
		break;
	case 3:
		cout << "��������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�'�������" << endl;
		break;
	case 6:
		cout << "���������" << endl;
		break;
	case 7:
		cout << "�������" << endl;
		break;
	case 8:
		cout << "��������" << endl;
		break;
	case 9:
		cout << "���'������" << endl;
		break;
	}

Third:
	switch (d)
	{
	case 1:
		cout <<"����"<< endl;
		break;
	case 2:
		cout << "���" << endl;
		break;
	case 3:
		cout << "���" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:
		cout << "�'���" << endl;
		break;
	case 6:
		cout << "س���" << endl;
		break;
	case 7:
		cout << "ѳ�" << endl;
		break;
	case 8:
		cout << "³��" << endl;
		break;
	case 9:
		cout << "���'���" << endl;
		break;
		
	}


	system("pause");
}