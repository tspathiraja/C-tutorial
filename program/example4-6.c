/* Program 4.9 */
#include <stdio.h>
void main(){
	int a;
	printf("Menu");
	printf("\n--------------------------------");
	printf("\n1 - Microsoft Word");
	printf("\n2 - Yahoo messenger");
	printf("\n3 - AutoCAD");
	printf("\n4 - Java Games");
	printf("\n--------------------------------");
	printf("\nEnter number: ");
	scanf("%d",&a);
	switch (a){
		case 1:
			printf("Personal Computer Software\n");
			break;
		case 2: 
			printf("Web based Software\n");
			break;
		case 3: 
			printf("Scientific Software\n");
			break;
		case 4: 
			printf("Embedded Software\n");
			break;	
		default:
			printf("\nIncorrect input");
	}
}
