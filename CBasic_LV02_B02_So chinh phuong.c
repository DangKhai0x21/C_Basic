#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b;
	printf ("nhap vao mot so bat ki:");
	scanf("%d",&a);
	b= sqrt(a) ;
	if (b*b == a) printf ("day la so chinh phuong");
else printf ("day khong phai so chinh phuong");
 return 0;
 }
