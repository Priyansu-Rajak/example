#include<stdio.h>
int main(){
	printf("hello\n");
	printf("hello\nstdudent\n");
	printf("\"MySirG\"");
	printf("\n\\n");
	printf("\n\\r");
	printf("\n\"Teacher's Day\"");
	int a=5,b=7;
	printf("\nsum of %d and %d is:%d",a,b,a+b);
	int x;
	printf("\nenter number for square\n");
	scanf("%d",&x);
	printf("square of %d is:%d",x,x*x);
	int n,p;
	printf("\nenter two numbers for area of rectangle\n");
	scanf("%d%d",&n,&p);
	printf("area of rectangle is:%d",n*p);
	float r;
	printf("\nenter radius\n");
	scanf("%f",&r);
	printf("area of circle is:%f",2*3.14*r);
	return 0;
}
