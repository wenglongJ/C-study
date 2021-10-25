#include<iostream>
using namespace std;

int main() {
	//input and output
	int  carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more."<<endl;
	carrots = carrots + 2;
	cout << "Now you Have " << carrots << " carrots." << endl;
}