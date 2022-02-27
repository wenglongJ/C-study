#include<iostream>
int main() {
	char ch;

	std::cout << "Type, and I shall repat.\n";
	std::cin.get(ch);
	while (ch != '.') {
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	std::cout << "\nPlease excuse the slight confusion.";
	return 0;
}