#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < pow(2, n); i++)
	{
		int b = i ^ (i >> 1);
		string a = bitset<16>(b).to_string();
		cout << a.substr(16-n,16) << endl;	// yikes
	}

    return 0;
}
