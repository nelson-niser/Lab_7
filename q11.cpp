#include<iostream>
using namespace std;

int f(int a, int b)
{
if (a==0)	return b;

else	return f(b%a,a);

}


int main()
{
int a, b;

cout << "Enter two numbers to find their HCF: ";
cin >> a >> b;

if (a<b)	cout << f(a,b) << endl;
else	cout << f(b,a) << endl;

return 0;
}
