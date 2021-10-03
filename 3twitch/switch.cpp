#include "std_lib_facilities.h"

int main()
{
	char unit;
	cin >> unit;
	switch(unit)
	{
		case 'i':
			cout << "i\n";
			break;
		case 'c':
			cout << "c\n";
			break;
		default:
			cout << "default\n";
			break;
	}
	return 0;
}