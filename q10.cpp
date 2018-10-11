#include<iostream>
using namespace std;

int f(int a)
{
if (a==0)
{	return 0;	}
if (a==1)
{	return 1;	}
else
{
return (f(a-1)+f(a-2));

}

}

int main()
{
int a;

cout << "Enter a number to find it's Fibonacci term: ";
cin >> a;

cout << f(a-1) << endl;


return 0;
}
