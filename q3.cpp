#include<iostream>
using namespace std;

int f(int a, int b)
{
if (a<b)
{
a = a + 2;

cout << a << "    ";
f (a,b);
}

}


int main()
{
int a, b;

cout << "Enter two numbers to find even and odd numbers in their range: ";
cin >> a >> b;

if (a%2==0)
{	cout << "Even numbers between: ";	}
else {	cout << "Odd numbers between: ";	}

f(a,b);
cout << endl;

if (a%2==0)
{	cout << "Odd numbers between: ";	}
else {	cout << "Even numbers between: ";	}

f(a-1,b);
cout << endl;


return 0;
}
