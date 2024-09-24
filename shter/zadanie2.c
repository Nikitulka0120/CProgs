#include <stdio.h>

int main() {
int n=2;
int flag = 0;
int a = 21;
while(a%n!=0){
        n++;
        if (n==a) {flag = 1;
	printf("Число простое");
	break;}
	}
}
