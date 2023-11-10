#include <iostream>
#include <math.h>

using namespace std;

void parseAddition() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a + b << endl;
}

void parseSubtraction() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a - b << endl;
}

void parseMultiplication() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a * b << endl;
}

void parseDivision() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	if(b != 0) {
		cout << a / b << endl;
	}
}

void parseExponentiation() {
	float a=0, r=0;
	int b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	r=pow(a, b);
	cout << r << endl;
}

void parseSquareRoot() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sqrt(a);
	cout << r << endl;
}

void parseSine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sin(a);
	cout << r << endl;
}

void parseCosine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=cos(a);
	cout << r << endl;
}

void parseTangent() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=tan(a);
	cout << r << endl;
}
