#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d,e;
	clrscr();
	printf("Enter Value for A: ");
	scanf("%d",&a);
	printf("Enter Value for B: ");
	scanf("%d",&b);
	printf("Enter Value for C: ");
	scanf("%d",&c);
	printf("Enter Value for D: ");
	scanf("%d",&d);
	printf("Enter Value for E: ");
	scanf("%d",&e);
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is Max")
			       :printf("E is Max")
			 :(d>e)?printf("D is Max")
			       :printf("E is Max")
		   :(c>d)?(c>e)?printf("C is Max")
			       :printf("E is Max")
			 :(d>e)?printf("D is Max")
			       :printf("E is Max")
	     :(b>c)?(b>d)?(b>e)?printf("B is Max")
			       :printf("E is Max")
			 :(d>e)?printf("D is Max")
			       :printf("E is Max")
		   :(c>d)?(c>e)?printf("C is Max")
			       :printf("E is Max")
			 :(d>e)?printf("D is Max")
			       :printf("E is Max");
	getch();
}