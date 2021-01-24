#include <iostream>

using namespace std;

// Definitions of Logical Operations

bool logicalAnd(bool p, bool q){
	return p && q;
}

bool logicalOr(bool p, bool q){
	return p || q;
}

// The XOR operation
bool logicalExclusiveOr(bool p, bool q){
	return (p || q) && !(p && q);
}

bool logicalConditionalStatement(bool p, bool q){
	// Original Condition: !(p && !q)
	// Returns true false only if p is true and q is false
	// Used De Morgan's law to make the expression more efficient
	return !p || q;
}

bool logicalBiconditionalStatement(bool p, bool q){
	return p == q;
}

// Helper Functions

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

int main(int nNumberofArgs, char* pszArgs[]){
	bool p = inputValueOfProposition("p");
	bool q = inputValueOfProposition("q");

	cout << endl << "Values of compound propositions (using logical operations):" << endl;

	// Conjunction
	printLogicalOperationValue("Conjunction (logical and)", logicalAnd(p, q));
	// Disjunction
	printLogicalOperationValue("Disjunction (logical or)", logicalOr(p, q));
	// Exclusive Or
	printLogicalOperationValue("XOR (logical exclusive or)", logicalExclusiveOr(p, q));
	// Conditional Statement
	printLogicalOperationValue("Logical Conditional Statement", logicalConditionalStatement(p, q));
	// Biconditional Statement
	printLogicalOperationValue("Logical Biconditional Statement", logicalBiconditionalStatement(p, q));
}
