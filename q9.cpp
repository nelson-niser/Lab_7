#include<iostream>
using namespace std;


int f(int a)
{
if (a>1)
{	return (a*f(a-1));	}

else
{	return 1;	}

}

int main()
{
int a;

cout << "Enter a number to find it's factorial: ";
cin >> a;

cout << f(a) << endl;


return 0;
}
