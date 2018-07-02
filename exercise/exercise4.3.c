/* exercise 4.3 */
#include <stdio.h>
void main(){
	int num,chk;
	printf("enter number: ");
	scanf("%d",&num);
	chk=num%2;
	if (chk==0){
		printf("number is even\n");
	}
	else
		printf("number is odd\n");

}
