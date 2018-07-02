/* example 4.1 */
#include <stdio.h>
void main(){
	int amount,discount;
	printf("enter by amount: ");
	scanf("%d",&amount);
	if (amount >=1000){
		discount=amount*0.95; // final amount( added 5% discount)
		printf("final amount: %d\n",discount);
	}
	
}

