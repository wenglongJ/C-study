#include<iostream>
using namespace std;

int show(int hours, int minutes) {
	cout << "Time: " << hours << ":" << minutes << endl;
	return 0;
}
int main() {
	int hours, minutes;
	cout << "Enter the nmber of hours:";
	cin >> hours;
	cout << "Enter the nmber of minutes:";
	cin >> minutes;
	show(hours, minutes);
	return 0;
}