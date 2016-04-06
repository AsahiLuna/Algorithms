#include <iostream>
using namespace std;
//void printPermutations(char *charArr,int n);
void doPermutations(char *charArr, int i, int n);
void swapChar(char *charArr, int i, int j);
/*int main() {
	int n;
	cin >> n;
	char charArr[10];
	cin >> charArr;
	doPermutations(charArr, 0, n);
	return 0;
}*/
void doPermutations(char *charArr, int i, int n) {
	if (i>n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << charArr[i] << ' ';
		}
		cout << endl;

	}
	for (int j = i; j < n; j++)
	{
		swapChar(charArr, i, j);
		doPermutations(charArr, i + 1, n);
		swapChar(charArr, i, j);
	}
}
void swapChar(char *charArr, int i, int j) {
	char temp = charArr[i];
	charArr[i] = charArr[j];
	charArr[j] = temp;
}

