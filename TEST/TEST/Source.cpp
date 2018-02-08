#include<iostream>
#include<cstdlib>
#include<string>
#include <iomanip>  
#include <clocale>     
using namespace std;

void clear() {
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	std::cout << "\x1B[2J\x1B[H";
}

int main()
{
	int playerHealth = 100;
	int answerUser;
	int money = 0;

	cout << "1)Play   2)Quit" << endl;
	cin >> answerUser;
	if (answerUser == 1) {
		cout << "Choose the location" << endl;
		cout << "1)Forest   2)City   3)Cave 4)Finish" << endl;
		cin >> answerUser;
		switch (answerUser) {
		case 1:                                                                               //Forest
			cout << setw(50) << "FOREST" << endl;
			cout << "In front to you stand a bear" << endl;
			cout << "You actions:1)Kill bear   2)Turn back" << endl;
			cin >> answerUser;
			if (answerUser == 1) {
				cout << "You weapon is:1)Hatchet - +200$  2)Pistol - +20$" << endl;
				cin >> answerUser;
				switch (answerUser)
				{
				case 1:
					money = money + 200;
					playerHealth = playerHealth - 50;
					cout << "You have already killed a bear by Hatchet" << endl;
					cout << setw(100) << "Your health:" << playerHealth << endl;
					cout << setw(100) << "Your money:" << money << endl;
					cout << "1)You can continue   2)You can exit" << endl;
					cin >> answerUser;
					if (answerUser == 1) {
						cout << "You have already gone about 50m and you see a forester.He seek you for help" << endl;
						cout << "You actions: 1)Help - 200$  2)Exit" << endl;
						cin >> answerUser;
						switch (answerUser) {
						case 1:
							money = money + 200;
							playerHealth = playerHealth - 10;
							cout << setw(100) << "Your health:" << playerHealth << endl;
							cout << setw(100) << "Your money:" << money << endl;
						}

					}
					break;
				case 2:
					money = money + 20;

					cout << "You have already killed a bear by Pistol" << endl;
					cout << setw(100) << "Your health:" << playerHealth << endl;
					cout << setw(100) << "Your money:" << money << endl;
					cout << "1)You can continue   2)You can exit" << endl;
					cin >> answerUser;
					if (answerUser == 1) {
						cout << "You have already gone about 50m and you see a forester.He seek you for help" << endl;
						cout << "You actions: 1)Help - 200$  2)Exit" << endl;
						cin >> answerUser;
						switch (answerUser) {
						case 1:
							money = money + 200;
							playerHealth = playerHealth - 10;
							cout << setw(100) << "Your health:" << playerHealth << endl;
							cout << setw(100) << "Your money:" << money << endl;
							cout<<"1)Continue   2)Exit";
							cin>>answerUser;
							if(answerUser==1){
								cout<<"You have enough money to buy a other weapons"<<endl;
								cout << "1)Go to the shop 2)Continue  3)Exit" << endl;
								
								cin >> answerUser;
								switch (answerUser) {
								case 1:
									cout << "1)ak47-200$ 2)m4a1-100$ 3)knife-10$" << endl;
									cout << setw(100) << "Your money:" << money << endl;
									////////////////s
									
								}
							
							
							}
							else{
								main();
							}
							
							break;
						}

					}



					break;
				}

			}
			else {
				exit(0);
			}


			system("pause");
}
}
}

		


	
