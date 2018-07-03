/* exerise 5.5 */
#include <stdio.h>
void main(){
	int a;
	printf("Enter number of times to repeat: ");
	scanf("%d", &a);
	if(a>0){
		while(a != 0){
			printf("Hello World!\n");
                	a--;
                }
	}	
	else
		printf("please enter positive integers\n");
}	
