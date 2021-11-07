#include "../std_lib_facilities.h"

int main()
{
	vector<int> v(10);
	int i = 0;

	while(i < 9)
		v[i] = i++;
	for (const auto& e : v)
		cout << e << endl;
	i = 0;
	cout << endl;

	while(i < 9)
		v[i++] = i;
	for (const auto& e : v)
		cout << e << endl;
	cout << endl;

	i = 0;
	int x = ++i + ++i;

	cout << x << endl;

}