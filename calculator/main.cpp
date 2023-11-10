#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "------------------\n(h) For help\n(e) To exit\nEnter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
				parseAddition();
			break;
			case 'm':
				parseSubtraction();
			break;
			case 'u':
				parseMultiplication();
			break;
			case 'd':
				parseDivision();
			break;
			case 'p':
				parseExponentiation();
			break;
			case 'r':
				parseSquareRoot();
			break;
			case 's':
				parseSine();
			break;
			case 'c':
				parseCosine();
			break;
			case 't':
				parseTangent();
			break;
			case 'h':
				help();
			break;
			case 'e':
				flag=false;
			break;
			default:
				error();
			break;
		}
	}
	return 0;
}
