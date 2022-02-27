#include<iostream>

enum { red, orange, yellow, green, blue, violet, indigo };

int main() {
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo) {
		switch (code) {
		case red:cout << "Her lips were red.\n";
			break;
		case orange:cout << "Her hair was orange.\n";
			break;
		case yellow:cout << "Her shoes wre yellow.\n";
			break;
		case green:cout << "Her nails wre green.\n";
			break;
		case blue:cout << "Her sweatsuit wre blue.\n";
			break;
		case violet:cout << "Her eyes wre violet.\n";
			break;
		case indigo:cout << "Her mood wre indigo.\n";
			break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
	return 0;
}