#include<iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main() {
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	cout << cookies << " = array address, ";
	cout << sizeof(cookies) << " = sizeof cookies\n";

	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << "\n";

	sum = sum_arr(cookies, 3);
	cout << "First three eaters ate " << sum << " cookies.\n";

	sum = sum_arr(cookies + 4, 4);
	cout << "Last four eaters ate " << sum << " cookies.\n";
	return 0;
}

int sum_arr(int arr[], int n) {
	int sum = 0;

	std::cout << arr << " = arr, ";
	std::cout << sizeof(arr) << " = sizeof arr\n";
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}