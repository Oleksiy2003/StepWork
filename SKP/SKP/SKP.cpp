#include<iostream>
#include<cstdlib>
#include<string>
#include <clocale>     
using namespace std;

void Game() {
	int a, b;
	cout << "Choose the sign:1)Stone 2)Paper 3)Scissors" << endl;
	cin >> a;
	if (a > 3) {
		cout << "Enter was failed" << endl;
		
	}


	cout << "Choose the seecond sign:1)Stone 2)Paper 3)Scissors" << endl;
	cin >> b;
	if (a == 1 && b == 2) {
		cout << "Comp is win" << endl;
	}
	else if (a == 1 && b == 3) {
		cout << "You win" << endl;
	}
	else if (a == 2 && b == 3) {
		cout << "Comp is win" << endl;
	}
	else
	{
		cout << "You win" << endl;
	}

	
}
int main() {
	Game();
	




	system("pause");
	return 0;
}