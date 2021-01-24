/*
Exercise 1.2

Given two bit strings of length n, find the bitwise AND,
bitwise OR, and bitwise XOR of these strings.
*/

#include <iostream>

using namespace std;

// Helper Functions

string inputBitString(string indexWord){
	cout << "Input the " << indexWord << " bit string below:" << endl;

	string bitString;
	cin >> bitString;

	return bitString;
}

bool areSameLength(string a, string b){
	return a.length() == b.length();
}

bool isBitString(string s){
	for(int i = 0; i < s.length(); i++){
		if(s.at(i) != '0' && s.at(i) != '1'){
			return false;
		}
	}
	return true;
}

bool charToBool(char c){
	if(c == '0'){
		return false;
	}
	return true;
}

char boolToChar(bool b){
	if (b) {
		return '1';
	}
	return '0';
}

// Definitions of Logical Operations

string bitwiseAnd(string a, string b){
	string result = "";
	for(int i = 0; i < a.length(); i++){
		bool ca = charToBool(a.at(i));
		bool cb = charToBool(b.at(i));
		result += boolToChar(ca && cb);
	}
	return result;
}

string bitwiseOr(string a, string b){
	string result = "";
	for(int i = 0; i < a.length(); i++){
		bool ca = charToBool(a.at(i));
		bool cb = charToBool(b.at(i));
		result += boolToChar(ca || cb);
	}
	return result;
}

string bitwiseXOr(string a, string b){
	string result = "";
	for(int i = 0; i < a.length(); i++){
		bool ca = charToBool(a.at(i));
		bool cb = charToBool(b.at(i));
		result += boolToChar(ca xor cb);
	}
	return result;
}

int main(int nNumberofArgs, char* pszArgs[]){
	string a = inputBitString("first");
	string b = inputBitString("second");

	if(!areSameLength(a, b)){
		cout << "Error: The two bit strings do not match in length." << endl;
		return 1;
	}

	if(!isBitString(a) || !isBitString(b)){
		cout << "Error: One or both of the bit strings you provided is not valid." << endl;
		return 1;
	}

	cout << "Bitwise AND" << endl;
	cout << bitwiseAnd(a, b) << endl;

	cout << "Bitwise OR" << endl;
	cout << bitwiseOr(a, b) << endl;

	cout << "Bitwise XOR" << endl;
	cout << bitwiseXOr(a, b) << endl;
}
