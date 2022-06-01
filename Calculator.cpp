#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	char op;
	
	for(int i = 1; i > 0; i++) {
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter operator: ";
		cin >> op;
		cout << "Enter second number: ";
		cin >> num2;
		if(op == '+') {
			cout << "Result: " << num1 + num2 << endl;
		} else if(op == '-') {
			cout << "Result: " << num1 - num2 << endl;
		} else if(op == '*') {
			cout << "Result: " << num1 * num2 << endl;
		} else if(op == '/') {
			cout << "Result: " << num1 / num2 << endl;
		} else {
			cout << "Invalid operator. Please try again." << endl;
		}
	}
}
