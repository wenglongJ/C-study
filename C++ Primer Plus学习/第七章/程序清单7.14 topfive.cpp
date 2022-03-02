#include<iostream>
#include<string>
using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main() {
	string list[SIZE];
	cout << "Enter your " << SIZE << " favorite astronomical sights: \n";
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << ":";
		getline(cin, list[i]);         
		//cin.getline(list[i]);错误，对于string类无法像char字符串数组一样输入
	}
	cout << "Your list:\n";
	display(list, SIZE);

	return 0;
}

void display(const string sa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": " << sa[i] << endl;
	}
}