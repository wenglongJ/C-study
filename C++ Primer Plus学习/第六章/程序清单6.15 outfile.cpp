#include<iostream>
#include<fstream>

int main() {
	using namespace std;
	char autombile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(autombile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;       //保留两位小数精度
	cout.precision(2);
	cout.setf(ios_base::showpoint);         //显示小数后面的零
	cout << "Make and model: " << autombile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	outFile << fixed;       //保留两位小数精度
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << autombile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();
	return 0;
}