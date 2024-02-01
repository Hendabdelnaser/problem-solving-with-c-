#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r;
	double const PI = 3.141592653;
	cin >> r;

	cout << fixed << setprecision(9) << PI * r * r <<  "\n";

	return 0;
}
