#include<iostream>
using namespace std;

void simon(int); //function prototype for simon()

int main() {
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}



void simon(int n) {
	cout << "Simon says touch your yoes " << n << " times." << endl;
}
