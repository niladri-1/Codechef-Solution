#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a, &b, &c);
	    printf("%d \n", ((a*5)+(b*10))/c);

	}
	return 0;
}

