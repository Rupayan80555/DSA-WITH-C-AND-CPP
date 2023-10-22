#include<stdio.h>
#include<math.h>
#define PI 3.14159265359
float area(float r){
    return PI*pow(r,2);
}
int main()
{
    
    printf("%f",area(5.3));
    return 0;
}