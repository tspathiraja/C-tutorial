/* example 4.2 */
#include <stdio.h>
void main(){
	float amount,discount;
	printf("enter by amount: ");
	scanf("%f",&amount);
	if (amount >=1000){
		discount=amount*0.95; // final amount( added 5% discount)
		printf("discount: %.2f\n",amount*0.05);
		printf("final amount: %.2f\n",discount);
	}
	if (amount <1000){
		printf("No Discount");
		printf("\nfinal amount: %.2f\n",amount);
	}
}
