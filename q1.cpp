#include<iostream>
using namespace std;

int power(int a, int b)
{
if (b == 1)
{	return a;	}
else
{
b--;
return a*power(a,b);
}

}

int main()
{
int a, b;

cout << "Enter two numbers 'a' and 'n' to find the value of 'a' raised to power 'n': ";
cin >> a >> b;

cout << power(a,b) << endl;

return 0;
}

