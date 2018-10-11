#include<iostream>
using namespace std;


int f(int a)
{

if (a>9)
{


return (a%10 + f((a-(a%10))/10));
}

else 
{	return a%10;	}

}


int main()
{
int a;

cout << "Enter a number to find sum of it's digits: ";
cin >> a;

cout << f(a) << endl;

return 0;
}
