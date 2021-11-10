#include<iostream>
using namespace std;

double juli(double light_years) {
	return 63240*light_years;
}
int main() {
	double light_years, astronomiscal;
	cout << "Enter the number of light years: ";
	cin >> light_years;
	astronomiscal = (int)juli(light_years);
	cout << light_years << " light years = " <<astronomiscal << " astronomical units.";
	return 0;
}