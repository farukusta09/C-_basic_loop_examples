#include<iostream>

using namespace std;

int main() {

	int input;
	cout << "please enter a number between 1-7:\n";
	cin >> input;

	switch (input) {
		case 1:
		cout << "today is monday" << endl;
			break;
		case 2:
			cout << "today is tuesday" << endl;
			break;
		case 3:
			cout << "today is wednesday" << endl;
			break;
		case 4:
			cout << "today is thursday" << endl;
			break;
		case 5:
			cout << "today is friday" << endl;
			break;
		case 6:
			cout << "today is saturday" << endl;
			break;
		case 7:
			cout << "today is sunday" << endl;
			break;
		default:
			cout << "you entered invalid number..." << endl;
			break;

	}


	return 0;

}
  
