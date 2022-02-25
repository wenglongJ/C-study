#include<iostream>
int main() {
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	                                cin.get();            //如果不用cin.get清楚换行符，下面的cin.getline()看到会输入空行
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}