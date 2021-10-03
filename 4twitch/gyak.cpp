#include "../std_lib_facilities.h"

int error_id;

int area(int x, int y)
{
	if (x <= 0)
	error_id = 8;
	if (y <= 0)
		error_id = 9;
	return x*y;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int terulet = area(a, b);
	if (error_id == 0)
		error("bad length\n");
	if (error_id == 9)
		error("bad width\n");
	cout << terulet << endl;
}