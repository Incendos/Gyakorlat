#include "../std_lib_facilities.h"

namespace unideb
{
int my_find(const vector<string>& vs, const string& s);
int my_find(const vector<string>& vs);
}

namespace BME
{
int my_find(const vector<string>& vs, const string& s);
int my_find(const vector<string>& vs);
}

//előre deklaráljuk a függvény neveket, ilynkor a törzse a main után is állhat
namespace unideb
{
int my_find(const vector<string>& vs, const string& s)
{
	for (int i = 0; i < vs.size(); i++)
	{
		if (vs[i] == s)
			return i;
	}
	return -1;
}
// a függvényt a neve és a paraméterei azonosítják
int my_find(const vector<string>& vs, const string& s, int hint)
{
	if(hint < 0 || vs.size() <= hint)
		hint = 0;
	for (int i = hint; i < vs.size(); i++)
		if(vs[i] == s) return i;
	if (0 < hint)
		for (int i = 0; i < hint; i++)
			if(vs[i] == s) return i;
	return -1;
}
}

namespace BME
{

int my_find(const vector<string>& vs, const string& s, int hint)
{
	return -2; 
}

int my_find(const vector<string>& vs, const string& s)
{
	return -3;
}
}
int main()
{

vector<string> fruits = {"apple","peach","pear","grapes","lemon","orage"};

string s = "grapes";
int hint = 2;
int index = BME::my_find(fruits, s, hint);

if (index < 0)
	cout << "Fruit is not found\n";
else
	cout << "Fruit is found at index: " << index << endl;

return 0;

//proba git hubhoz

}