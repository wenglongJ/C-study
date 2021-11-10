#include<iostream>
using namespace std;


int change(int age) {
	return  12 * age;
}
int main() {
	int age,mouths;
	cout << "Enter your age: ";
	cin >> age;
	mouths = change(age);
	cout << "Your age in mouths is " << mouths << endl;
	return 0;
}