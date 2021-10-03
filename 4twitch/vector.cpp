#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double i; cin >> i;)
		temps.push_back(i);
	for (double i : temps)
		cout << i << endl;
	cout << "sorba rendezve:\n";
	sort(temps);
	for (double i : temps)
		cout << i << endl;
}