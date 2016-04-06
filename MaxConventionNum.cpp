#include <iostream>
#include <stdio.h>
using namespace std;
int methodOfSuccessiveDivision(int num1, int num2);
/*int main() {
	int a, b, n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d",&a,&b) ;
		printf("%d\n" ,methodOfSuccessiveDivision(a, b));
	}

}*/
int methodOfSuccessiveDivision(int num1, int num2) {

	return num1%num2 == 0 ? num2 : methodOfSuccessiveDivision(num2, num1%num2);
}
