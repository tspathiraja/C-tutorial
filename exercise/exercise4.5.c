/* exercise 4.5 */
#include <stdio.h>
void main(){
	int c;
	float a,b,add,subtract,multiply,divide;
	printf("Enter number 1:");
	scanf("%f",&a);
	printf("Enter number 2:");
        scanf("%f",&b);

	printf("Mathematical Operaation");
	printf("\n--------------------------------");
	printf("\n1 - Add");
	printf("\n2 - Subtract");
	printf("\n3 - Multiply");
	printf("\n4 - Divide");
	printf("\n--------------------------------");
	printf("\nEnter your preference: ");
	scanf("%d",&c);
	switch (c){
		case 1:
			add=a+b;
			printf("Answer : %.2f\n",add);
			break;
		case 2: 
			subtract=a-b;
			printf("Answer : %.2f\n",subtract);
			break;
		case 3: 
			multiply=a*b;
			printf("Answer : %.2f\n",multiply);
			break;
		case 4: 
			divide=a/b;
			printf("Answer : %.2f\n",divide);
			break;
		default:
			printf("Incorrect input\n");
	}
}
