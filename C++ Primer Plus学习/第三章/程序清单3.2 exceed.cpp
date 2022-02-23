#include<iostream>
#define ZERO 0
#include<climits>

int main() {
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;       //sue=sam=32767极限值
	cout << " dollars deposited." << endl 
		 << "And $1 to each account." << endl << "Now ";
	
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;      //short+1越线由   11111111 + 1 = 100000000  unsigned +1
	cout << " dollars deposited.\nPoor Sam!" << endl;
	
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;     //sue=sam=0
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";

	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;     //sam-1越线 由000000000 - 1 = 0111111111 
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}