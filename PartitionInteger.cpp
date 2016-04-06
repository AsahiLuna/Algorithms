#include<iostream>
using namespace std;
int p(int n,int m);
int main() 
{
	int n1;
	cin >> n1 ;
	while (n1--)
	{
		int n;
		cin >> n ;
		cout << p(n, n) <<endl;
	}

}
int p(int n,int m)
{
	if (n==1||m==1)
	{
		return 1;
	}
	if (n<=m)
	{
		return 1 + p(n, n - 1);
	}
	return p(n - m, m) + p(n, m - 1);
}
