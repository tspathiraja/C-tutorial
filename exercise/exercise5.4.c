/* exerise 5.4 */
#include <stdio.h>
void main(){
	int a,i,factorial=1;
	printf("enter positive integer: ");
	scanf("%d",&a);
	for (a=1;i<=a;++a){
		factorial*=i;
	}
	printf("Factorial: %d\n",factorial);
}
