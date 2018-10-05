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
int a, b;
cin >> a >> b;

cout << sum(a,b-1) <<endl;

return 0;
}
