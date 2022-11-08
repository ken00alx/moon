#include <stdio.h>
#include <stdlib.h>


int myFunction(int x, int y){
	return x + y;} //creating a function of addition
int my_function(int i, int j){
	return i / j;
} // function of division
int main(void)
{
	int myScore = myFunction(24, 5); // this locate the call function of addition
	printf("Result is =%d\n", myScore);

	int my_score = my_function(27, 3);// work the process of division
	printf("The division is %d\n", my_score);


	int a = 21;
	int b = 3;

	int* ptr = &b; //This is a pointer

	int result = a * b;

	printf("Result is %d\n", result); // this gives the mulitiplication of result//
	printf("The pointer of b is %d\n", *ptr); // this show what b is holding which is 3//
	printf("The address of b is %d\n", &b); //this show the address where b reside//

	return 0;
}


