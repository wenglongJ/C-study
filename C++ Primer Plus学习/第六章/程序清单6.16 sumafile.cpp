#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE = 60;

int main() {
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) {       //检测文件能否被打开
		cout << "could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE); 
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) {
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "End of file reach.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else {
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}