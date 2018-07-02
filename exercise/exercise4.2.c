/* exercise 4.2 */
#include <stdio.h>
void main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if (marks >=50){
		printf("you have passed the exam!\n");
	}
	else
		printf("you are failed\n");
}
