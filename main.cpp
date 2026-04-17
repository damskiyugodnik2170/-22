#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");

	int arrInt[10] = {1, 20, 5, 4, 1, 2, 2, 9, 23, 5};
		short arrShort[10] = {-10, 5, 0, 15, -3, 8, 1, -7, 4, 9};
		long arrLong[10] = {1000000, -500000, 0, 250000, -125000, 50000, 75000, -25000, 10000, -5000};
		float arrFloat[10] = {1.5f, -2.7f, 0.0f, 3.14f, -1.25f, 0.5f, -3.75f, 2.25f, -0.5f, 1.0f};
		double arrDouble[10] = {3.9793, -1.2, 0.0, 2.715, -0.01533, 1.61, -2.745, 3.143, -0.981, 0.699945};
		char arrChar[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
		bool arrBool[10] = {true, false, true, true, false, false, true, true, true, false};
		string arrString[10] = {"Hello", "World", "C++", "Programming", "Arrays", "Example", "Test", "Data", "Structure", "Learning"};

		cout << "Массив INT:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrInt[" << i << "] =" << arrInt[i] << endl;
	}

	cout << "\nМассив SHORT:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrShort[" << i << "] =" << arrShort[i] << endl;
	}

	cout << "\nМассив LONG:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrLong[" << i << "] =" << arrLong[i] << endl;
	}

	cout << "\nМассив FLOAT:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrFloat[" << i << "] =" << arrFloat[i] << endl;
	}

	cout << "\nМассив DOUBLE:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrDouble[" << i << "] =" << arrDouble[i] << endl;
	}

	cout << "\nМассив CHAR:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "arrChar[" << i << "] = '" << arrChar[i] << "'" << endl;
	}

	cout << "\nМассив BOOL:" << endl;
	for (int i = 0; i < 10; i++) {

		cout << "arrBool[" << i << "] = '" << arrBool[i] << "'" << endl;
	}
}
