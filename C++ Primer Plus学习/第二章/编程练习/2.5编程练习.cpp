#include<iostream>
using namespace std;

double wendu(int celsius) {
	return 1.8 * celsius + 32.0;
}
int main() {
	int celsius, fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	fahrenheit = (int)wendu(celsius);
	cout << celsius << " degress Celsius is " << fahrenheit << " degrees Fahrenheit.";
}