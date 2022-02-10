#include<stdio.h>
void input(float*base,float*height)
{
  printf("Enter a numbe\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("the area of triangle %f and %f is %f\n",height,base,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}