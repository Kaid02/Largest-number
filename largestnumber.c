# include <stdio.h>

 int main(){
	int a,b,c,largest;
	
	printf("Enter the first number : ") ;
	scanf("%d", &a) ;
	
	printf("\nEnter the second number : ");
	scanf("%d",&b);
	
	printf("\nEnter the third number : ");
	scanf("%d",&c);
	
	
	
	(a>=b&&a>=c)?printf("a is largest):(b>=a&&a>=c)?printf("b is largest"):printf("c is largest");
	
	printf("\nThe biggest number is : %d", largest) ;
	}
