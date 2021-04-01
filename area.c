#include<stdio.h>
float area(float r)
{
  return(3.14 * r * r);
}
void main()
{
  float r;
  printf("Enter the radius of the circle : ");
  scanf("%f", &r);
  printf("The area of the circle having the radius %5.2f is %6.4f", r, area(r));
}
