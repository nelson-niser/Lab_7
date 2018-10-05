#include<iostream>
using namespace std;

int Num(int i, int n)
{
	if (i>n)
		{
		 return 0;
		}

	else
		{
		cout << i << "   ";
		i++;
		Num(i,n);
		return 0;
		}
}



int main()
{
int n;

cout << "enter a number n to see all the natural numbers upto n: " ;
cin >> n;

Num(1,n);
cout << endl;

return 0;
}
