#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main()
{

   double arg, result;
   scanf("%lf", &arg);

   // Converting to radian
   arg = (arg * PI) / 180;
   result = cos(arg);

   printf("cos of %.2lf radian = %.2lf", arg, result);


}
