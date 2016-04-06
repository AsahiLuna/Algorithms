#include"iostream"
using namespace std;
int Fibonacci(int n)
{
	if (n == 0 || n == 1)return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int pFibonacci(int n)
{
	int i = 0;
	while (i++)
	{
		int Fi = Fibonacci(i);
		if (n>Fi)
		{
			return Fi;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	cout << pFibonacci(n);
}
