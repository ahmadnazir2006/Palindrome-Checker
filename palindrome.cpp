#include<iostream>
using namespace std;
int main() {
	int number;
	cout << "Enter the number\n";
	cin >> number;
	int reverse=0;
	
		while (number > 0) {
			reverse = reverse * 10 + (number % 10);
			number = number / 10;
		}
		cout << reverse;
		if (number = reverse) {
			cout << "It is a palindromic number\n";
		}
		else {
			cout << "it is not a palindromic number\n";
		}
	} 
	
