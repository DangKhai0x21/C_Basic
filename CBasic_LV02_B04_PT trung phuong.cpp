#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main ()
{
    float a,b,c,a1,b1,x1,x2,x3,x4,x5,x6,x7,delta;
	printf("day la chuong trinh giai phuong trinh trung phuong...");
	printf("moi ban nhap so a:");
	scanf("%f",&a);
	printf("moi ban nhap so b:");
	scanf("%f",&b);
	printf("moi ban nhap so c:");
	scanf("%f",&c);
	a1 = sqrt(a);
	b1 = sqrt(b);
	delta =(b1*b1)- (4*a1*c);
    if (delta<0) printf("phuong trinh vo nghiem");
    {
	x1 = -b1/2*a1 ;
    if (delta==0) printf ("phuong trinh co mot nghiem kep:");
    printf("%f",&x1);
    }    
    {
	x2 = (-b1+sqrt(delta))/(2*a1);
    x3 = (-b1-sqrt(delta))/(2*a1);
    if (delta>0) printf ("phuong trinh co hai nghiem phan biet:");
    printf("%f",x2);
    printf("%f",x3);
    x4=(x2*x2);
    x5=-(x2*x2);
    x6=(x3*x3);
    x7=-(x3*x3);
    printf ("phuong trinh trung phuong co 4 nghiem la:");
    printf ("%f%f%f%f",x4,x5,x6,x7);
    }
    
    return 0;
}
///// bai nay em bi roi ==
