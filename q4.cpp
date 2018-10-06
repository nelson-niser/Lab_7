#include<iostream>
using namespace std;

int sum(int a, int b)
{
if (b>a)
	return (b+sum(a,b-1));

else
	return 0;

}



int main()
{
int a;
cout << "Enter a number n to find sum of all natural numbers between 1 to n: "; 
cin >> a;

cout << sum(0,a-1) <<endl;

return 0;
}
