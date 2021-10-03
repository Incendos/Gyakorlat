#include "../std_lib_facilities.h"

int main()
{
	cout << "Plase enter an expression\n";
	int lval = 0, rval = 0, res = 0;
	char op = 0;
	cin >> lval;
	for (char op; cin >> op; )
	{
		if (op != 'x')
			cin >> rval;
	switch(op)
	{
		case '+':
			lval = lval + rval;
			break;
		case '-':
			lval = lval - rval;
			break;
		case '*':
			lval = lval * rval;
			break;
		case '/':
			lval = lval / rval;
		default:
			cout << "Result: " << lval << endl;
			return 0;
	}
	}
	return 0;

}