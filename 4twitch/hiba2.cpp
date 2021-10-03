#include "../std_lib_facilities.h"

class Bad_area{};

int error_id;

int area(int x, int y)
{
	if (x <= 0)
	throw Bad_area{};
	if (y <= 0)
	throw Bad_area{};
	return x*y;
}

int main()
{
	int a, b;
	cin >> a >> b;
	try{
	int terulet = area(a, b);
	cout << terulet << endl;
	}
	catch (Bad_area)
	{
		cerr << "Bad area caught!\n";
	}
	if (error_id == 0)
		error("bad length\n");
	if (error_id == 9)
		error("bad width\n");
	
}