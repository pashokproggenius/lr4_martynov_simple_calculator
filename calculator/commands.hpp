
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float parseAddition(float a, float b) {
	return a + b;
}

float parseSubtraction(float a, float b) {
	return a - b;
}

float parseMultiplication(float a, float b) {
	return a * b;
}

float parseDivision(float a, float b) {
	if(b != 0) {
		return a / b;
	}else{
	return 0;
	}
}

float parseExponentiation(float a, float b) {
	float r=0;
	r=pow(a, b);
	return r;
}

float parseSquareRoot(float a) {
	float r=0;
	r=sqrt(a);
	return r;
}

float parseSine(float a) {
	float r=0;
	r=sin(a);
	return r;
}

float parseCosine(float a) {
	float r=0;
	r=cos(a);
	return r;
}

float parseTangent(float a) {
	float r=0;
	r=tan(a);
	return r;
}

void help() {
	cout << "\n\n";
	cout << " Calculator ------------------------------\n";
	cout << "\t a\t\t Addition of two number\n";
	cout << "\t m\t\t Subtraction of two number\n";
	cout << "\t u\t\t Multiplication of two number\n";
	cout << "\t d\t\t Division of two number\n";
	cout << "\t p\t\t Exponentiation of two number\n";
	cout << "\t r\t\t SquareRoot of a number\n";
	cout << "\t s\t\t Sine of anumber\n";
	cout << "\t c\t\t Cosine of anumber\n";
	cout << "\t t\t\t Tangent of a number\n";
	cout << "\t h\t\t Help\n";
	cout << "\t e\t\t Exit\n";
	cout << "\t l\t\t Start tests\n";
	cout << "\n\n";
}

string error() {
	cout << "Error : Input is anonymous!\n";
}
