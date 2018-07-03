/* exercise 5.6 */
#include <stdio.h>
void main(){
	int a;
	do{
	printf("Menu");
	printf("\n-----------------------------------");
	printf("1 - Microsoft Word\n");
	printf("2 - Yahoo messenger\n");
	printf("3 - AutoCAD\n");
	printf("4 - Java Games\n");
	printf("-----------------------------------\n");
	printf("Enter number of your preference: \n");
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
			printf("Incorrect input\n");
	}
	}
	while (a>0);
}
