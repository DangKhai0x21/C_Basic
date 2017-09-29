#include <stdio.h>
#include <math.h>
#include <conio.h>
#define Pi 3,14
int main ()
{
	float x1,x2,x3,a,P,C,S;
	   printf("Nhap 1 de tinh chu vi va dien tich hinh tam giac: \n ");
	   printf("Nhap 2 de tinh chu vi va dien tich hinh vuong: \n ");
	   printf("Nhap 3 de tinh chu vi va dien tich hinh chu nhat: \n ");
	   printf("Nhap 4 de tinh chu vi va dien tich hinh tron: \n");
	   scanf("%f",&a);
	{
	if (a==1) 
	   Printf("moi ban nhap do dai 3 canh cua tam giac:");
	   Scanf("%f%f%f",&x1,&x2,&x3);
	   C=x1+x2+x3;
	   P=C/2;
	   S=sqrt(P*(P-x1)*(P-x2)*(P-x3));
	   Printf("Dien tich tam giac la :");
	   Printf("%f \n",S);
	   Printf("Chu vi tam giac la:");
	   Printf("%f",C);
    }
    {
	if (a==2) 
	   Printf("Moi ban nhap do dai canh hinh vuong:");
       scanf("%f",&x1);
       C= (x1*4);
       S= (x1*x1);
       Printf ("Dien tich hinh vuong la:");
       Printf ("%f \n",S);
       Printf ("Chu vi hinh vuong la:");
       Printf ("%f",C);
    }	
	{   
    if (a==3) printf("Moi ban nhap do dai 2 canh hinh vuong");
       Scanf("%f%f",&x1,&x2);
       C= (x1+x2)/2;
       S= (x1*x2);
       Printf("Dien tich hinh chu nhat la:");
       Printf("%f \n",S);
       Printf("Chu vi hinh chu nhat la:");
       Printf("%f",C);
    }
   {
 	if (a==4)
	   Printf ("moi ban nhap do dai ban kinh r");
 	   Scanf("%f",&x1);
       C=2*x1*Pi;
       S=Pi*x1*x1 ;
       Printf("Dien tich hinh tron la:");
       Printf("%f \n",S);
       Printf("Chu vi hinh tron la:");
	   Printf("%f",C);
    }
 
	return 0;
}
//// em không biet doan code day bi loi gi . anh xem lai giup em voi!
