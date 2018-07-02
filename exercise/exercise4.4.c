/* exercise4.4 */
#include <stdio.h>
void main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks > 75){
		printf("Your grade is: A\n");
	}
   	if(marks <75){
		if (marks >=50)
			printf("Your grade is: B\n");
		}
   	if(marks <50){
		if (marks >=25)
			printf("Your grade is: C\n");
		}
	if(marks <25)
		printf ("Your grade is: F\n");
}
