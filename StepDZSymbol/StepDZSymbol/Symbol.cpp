#include<iostream>
#include<cstdlib>
#include<string>
#include <iomanip>  
#include <clocale>     
using namespace std;
int main() {
	setlocale(LC_ALL, "ukr");
	char symbol;
	int count;
	int answer;
	cout << "Введіть символ: ";
	cin >> symbol;
	cout << "Введіть кількість: ";
	cin >> count;
	cout <<"1 - "<< "Вертикально"<<endl;
	cout << "2 - " << "Горизонтально" << endl;
	cin >> answer;
	if (answer == 1) {
		for (int i = 0;i < count;i++) {
			cout << symbol << "\t" << endl;
		}
	}
	else
	{
		for (int i = 0;i < count;i++) {
			cout << "\t" <<symbol;
		}
	}
	if (answer < 1 || answer>2) {
		cout << "Ви ввели неправильне число" << endl;
	}
	

	system("pause");
}