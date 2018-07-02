/* example 4.4 */
#include <stdio.h>
void main(){
	float u,v,t,a;
	printf("Enter u (m/s): ");
	scanf("%f", &u);
	printf("Enter v (m/s): ");
	scanf("%f", &v);
	printf("Enter t (s) : ");
	scanf("%f", &t);
	if(t >= 0){
		a = (v-u)/t;
		printf("acceleration is: %.2f m/s\n", a);
	}
	else
		printf ("Incorrect time\n");
}
