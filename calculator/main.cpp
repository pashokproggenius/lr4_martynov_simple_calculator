#include <iostream>
#include "commands.hpp"

using namespace std;

bool startTests(){
    float first = parseAddition(1, 2);
    if (first != 3.0) return false;
    float second = parseSubtraction(3, 1);
    if (second != 2.0) return false;
    // ... all tests
    return true;
}

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "------------------\n(h) For help\n(e) To exit\nEnter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
                {
                    float a=0, b=0;
                    cout << "Enter the first value: ";
                    cin >> a;
                    cout << "Enter the second value: ";
                    cin >> b;
                    cout << parseAddition(a, b) << endl;
                    break;
                }
			case 'm':
                {
                    float a=0, b=0;
                    cout << "Enter the first value: ";
                    cin >> a;
                    cout << "Enter the second value: ";
                    cin >> b;
                    cout << parseSubtraction(a, b) << endl;
                    break;
                }
			case 'u':
                {
                    float a=0, b=0;
                    cout << "Enter the first value: ";
                    cin >> a;
                    cout << "Enter the second value: ";
                    cin >> b;
                    cout << parseMultiplication(a, b) << endl;
                }
			break;
			case 'd':
                {
                    float a=0, b=0;
                    cout << "Enter the first value: ";
                    cin >> a;
                    cout << "Enter the second value: ";
                    cin >> b;
                    cout << parseDivision(a, b) << endl;
                }
			break;
			case 'p':
                {
                    int a=0, b=0;
                    cout << "Enter the first value: ";
                    cin >> a;
                    cout << "Enter the second value: ";
                    cin >> b;
                    cout << parseExponentiation(a, b) << endl;
                }
			break;
			case 'r':
                {
                    float a=0;
                    cout << "Enter the value: ";
                    cin >> a;
                    cout << parseSquareRoot(a) << endl;
                }
			break;
			case 's':
                {
                    float a=0;
                    cout << "Enter the value: ";
                    cin >> a;
                    cout << parseSine(a) << endl;
                }
			break;
			case 'c':
                {
                    float a=0;
                    cout << "Enter the value: ";
                    cin >> a;
                    cout << parseCosine(a) << endl;
                }
			break;
			case 't':
                {
                    float a=0;
                    cout << "Enter the value: ";
                    cin >> a;
                    cout << parseTangent(a) << endl;
                }
			break;
			case 'h':
				help();
			break;
			case 'l':
                {
                    if(startTests() == true) cout << "all tests pass" << std::endl;
                    else cout << "tests failed" << std::endl;
                    break;
                }
			case 'e':
				flag=false;
			break;
			default:
				cout << error() << endl;
			break;
		}
	}
	return 0;
}
