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
	cout << "������ ������: ";
	cin >> symbol;
	cout << "������ �������: ";
	cin >> count;
	cout <<"1 - "<< "�����������"<<endl;
	cout << "2 - " << "�������������" << endl;
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
		cout << "�� ����� ����������� �����" << endl;
	}
	

	system("pause");
}