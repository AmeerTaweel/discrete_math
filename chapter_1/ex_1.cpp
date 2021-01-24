#include <iostream>

using namespace std;

bool inputValueOfProposition(string name){
	cout << "What is the truth value of proposition " << name << " (0 / 1)? ";

	bool proposition;
	cin >> proposition;

	cout << "Value of proposition " << name << " is set to ";
	if(proposition) {
		cout << "true";
	} else {
		cout << "false";
	}
	cout << "." << endl;

	return proposition;
}

void printLogicalOperationValue(string name, bool value){
	cout << name << ": ";
	if(value) {
		cout << "true";
	} else {
		cout << "false";
	}
	cout << endl;
}

bool exclusiveOr(bool p, bool q){
	return (p || q) && !(p && q);
}

bool conditionalStatement(bool p, bool q){
	return !(p && !q);
}

bool biconditionalStatement(bool p, bool q){
	return p == q;
}

int main(int nNumberofArgs, char* pszArgs[]){
	bool p = inputValueOfProposition("p");
	bool q = inputValueOfProposition("q");

	cout << endl << "Values of compound propositions:" << endl;
	// Conjunction
	printLogicalOperationValue("AND", p && q);
	// Disjunction
	printLogicalOperationValue("OR", p || q);
	// Exclusive Or
	printLogicalOperationValue("XOR", exclusiveOr(p, q));
	// Conditional Statement
	printLogicalOperationValue("Conditional Statement", conditionalStatement(p, q));
	// Biconditional Statement
	printLogicalOperationValue("Biconditional Statement", biconditionalStatement(p, q));
}
