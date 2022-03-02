#include<iostream>

double besty(int);
double pam(int);

void estimate(int lines, double(*pf)(int));

int main() {
	using namespace std;
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Betsy's estimate";
	estimate(code, besty);
	cout << "Here's pam's estimate";
	estimate(code, pam);
	return 0;
}

double besty(int lns) {
	return 0.05 * lns;
}

double pam(int lns) {
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double(*pf)(int)) {
	using namespace std;
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}