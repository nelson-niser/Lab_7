#include<iostream>
using namespace std;

int f(int a, int b)
{
if (a<b)
{
return (a + f (a +2,b));

}
else
{	return 0;	}
}


int main()
{
int a, b;

cout << "Enter two numbers to find sum of the even and odd numbers between them: ";
cin >> a >> b;

if (a%2==0)
{	cout << "Sum of even numbers between: ";	}
else {	cout << "Sum of odd numbers between: ";	}


cout << f(a+2,b) << endl;

if (a%2==0)
{	cout << "Sum of odd numbers between: ";	}
else {	cout << "Sum of even numbers between: ";	}


cout << f(a+1,b) << endl;


return 0;
}
