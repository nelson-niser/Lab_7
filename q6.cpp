#include<iostream>
using namespace std;

int fx(int a)
{
if (a>9)
{
cout << a%10;
a=(a-(a%10))/10;
fx(a);
}

else
{	cout << a; }

}


int main()
{
int a;

cin >> a;

fx(a);

cout << endl;

return 0;
}
