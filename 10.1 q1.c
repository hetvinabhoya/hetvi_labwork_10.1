#include<stdio.h>

  cube(int a)
  {
  	int cube = a*a*a;
  	
  	printf("cube is : %d",cube);
  }
  void main()
  {
  	int a;
  	
  	printf("Enter any number :  ");
  	scanf("%d",&a);
  	
  	cube(a);
  }
