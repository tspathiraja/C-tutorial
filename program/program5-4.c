/* Program 5.4 */
#include <stdio.h>
void main(){
	int a;
	printf("Enter number of times to repeat: ");
	scanf("%d", &a);
	while (a != 0){
		printf("Hello World!\n");
		a--;
	}
}
