#include <iostream>
using namespace std;
//Bank machine change assignment1

int main(){
	
	int x;
	//This is if the user wants to repeat. It is a while loop
	char again = 'Y';
	while (again == 'Y')
	{
	cout << "Enter withdrawl amount:" << endl;
	cin >> x;
	//How the demoinations are chosen
	if (x <= 300 && x >= 1) {
		int y;
		y = x;
		cout << "You have " << y / 50 << "$50.00 bills"<< endl;
		y = y % 50;
		cout << "You have " << y / 20 << "$20.00 bills" << endl;
		y = y % 20;
		cout << "You have " << y / 10 << "$10.00 bills" << endl;
		y = y % 10;
		cout << "You have " << y / 5 << "$5.00 bills" << endl;
		y = y % 5;
		cout << "You have " << y / 1 << "$1.00 bills" << endl;
	}
	else {
		//results of the given amounts.
		cout << "Sorry the max/min amount you can withdraw is $300.00/$1.00" << endl;

	}//end the while loop
	cout << "Another withdrawl? (Enter Y to continue)";
	cin >> again;
	
		return 0;
		cout << "The end." << endl;
	}
}
