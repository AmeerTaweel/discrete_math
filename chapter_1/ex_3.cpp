/*
Exercise 1.3

Given a compound proposition, determine whether it is satisfiable
by checking its truth value for all positive assignments of truth
values to its propositional variables.
*/

#include <iostream>

using namespace std;

class Proposition{
	public:
		virtual bool evaluate();
};

class True: public Proposition{
	public:
		bool evaluate(){
			return true;
		}
};

class False: public Proposition{
	public:
		bool evaluate(){
			return false;
		}
};

class Conjunction: public Proposition{
	public:
		Conjunction(Proposition a, Proposition b){
			p = a;
			q = b;
		}

		bool evaluate(){
			return p.evaluate() && q.evaluate();
		}
	private:
		Proposition p, q;
};

int main(int nNumberofArgs, char* pszArgs[]){
}
