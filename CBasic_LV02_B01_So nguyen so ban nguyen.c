#include <stdio.h>
#include <math.h>
int main ()
{
	float a;
	int b;
    printf("nhap mot so a bat ki:");
    scanf("%f",&a);
    b=a*3;
	if (b%3==1) printf("a la so ban nguyen");
	else
		printf("a ko phai la so ban nguyen");
return 0;
}
    
