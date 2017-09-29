#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,delta,x1,x2,x3,x4;
    printf ("chao mung ban den voi chuong trinh giai phuong trinh bac hai:");
    printf ("moi ban nhap a:");
    scanf ("%f",&a);
    printf ("moi ban nhap b:");
    scanf("%f",&b);
    printf("moi ban nhap c:");
    scanf("%f",&c);
    delta =(b*b)- (4*a*c);
    x1 = -b/2*a ;
    x2 = (-b+sqrt(delta))/(2*a);
    x3 = (-b-sqrt(delta))/(2*a);	 
	if(a==0)
	  {if(b==0)	
		{if(c==0)	printf("Phuong trinh vo so nghiem");
		else	printf("Phuong  trinh vo nghiem");
	}
	  else	printf("phuong trinh co nghiem la %f",x4=-b/c);}
    if (delta<0) printf("phuong trinh vo nghiem");
    if (delta==0) printf ("phuong trinh co mot nghiem kep:");
    printf("%f \n",x1);
    if (delta>0) printf ("phuong trinh co hai nghiem phan biet:");
    printf("%f",x2);
    printf("%f",x3);    
    return 0;
}
  


