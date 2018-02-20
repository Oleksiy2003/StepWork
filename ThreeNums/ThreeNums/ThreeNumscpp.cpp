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
		cout <<"¬и ввели неправильне число,введ≥ть число в≥д 100 до 999"<< endl;
	}

	switch (b) {
	case 1:
		cout << "—то" << endl;
		break;
	case 2:
		cout << "ƒв≥ста" << endl;
		break;
	case 3:
		cout << "“риста" << endl;
		break;
	case 4:
		cout << "„отириста" << endl;
		break;
	case 5:
		cout << "ѕ'€тсот" << endl;
		break;
	case 6:
		cout << "Ў≥стсот" << endl;
		break;
	case 7:
		cout << "—≥мсот" << endl;
		break;
	case 8:
		cout << "¬≥с≥мсот" << endl;
		break;
	case 9:
		cout << "ƒев'€тсот" << endl;
		break;
	}
	switch (c) {
	case 1:
		if (c == 1) {
			switch (d)
			{
			case 1:
				cout <<"одинадц€ть"<< endl;
          break;
			case 2:
				cout << "дванадц€ть" << endl;
				break;
			case 3:
				cout << "тринадц€ть" << endl;
				break;
			case 4:
				cout << "чотирнадц€ть" << endl;
				break;
			case 5:
				cout << "п'€тнадц€ть" << endl;
				break;
			case 6:
				cout << "ш≥стнадц€ть" << endl;
				break;
			case 7:
				cout << "с≥мнадц€ть" << endl;
				break;
			case 8:
				cout << "в≥с≥мнадц€ть" << endl;
				break;
			case 9:
				cout << "дев'€тнадц€ть" << endl;
				break;
			}
		}
	break;
	case 2:
		cout << "двадц€ть" << endl;
		break;
	case 3:
		cout << "тридц€ть" << endl;
		break;
	case 4:
		cout << "сорок" << endl;
		break;
	case 5:
		cout << "п'€тдес€т" << endl;
		break;
	case 6:
		cout << "ш≥стдес€т" << endl;
		break;
	case 7:
		cout << "с≥мдес€т" << endl;
		break;
	case 8:
		cout << "в≥с≥мдес€т" << endl;
		break;
	case 9:
		cout << "дев'€тосто" << endl;
		break;
	}

Third:
	switch (d)
	{
	case 1:
		cout <<"один"<< endl;
		break;
	case 2:
		cout << "ƒва" << endl;
		break;
	case 3:
		cout << "“ри" << endl;
		break;
	case 4:
		cout << "„отири" << endl;
		break;
	case 5:
		cout << "ѕ'€ть" << endl;
		break;
	case 6:
		cout << "Ў≥сть" << endl;
		break;
	case 7:
		cout << "—≥м" << endl;
		break;
	case 8:
		cout << "¬≥с≥м" << endl;
		break;
	case 9:
		cout << "ƒев'€ть" << endl;
		break;
		
	}


	system("pause");
}