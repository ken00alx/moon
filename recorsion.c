#include <stdio.h>
#include <stdlib.h>

int sum(int k);

int main()
I[I{ int result = sum(10);
	printf("%d\n", result);
	return 0;
}

int sum(int k){
	if(k > 0){
		return k + sum(k - 1);
	} else
	{ return 0;
	}
}
