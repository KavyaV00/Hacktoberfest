//LANGUAGE: C++
//ABOUT: Print area of triangle, circle or rectangle as per choice of user

#include <iostream.h>
#include <conio.h>
#include <math.h>

void artri()
{
	float a,b,c,s,ar;
	cout<< "Enter the sides:";
	cin>> a;
	cin>> b;
	cin>> c;
	s=(a+b+c)/2;
	ar=sqrt(s(s-a)(s-b)(s-c));
	cout<< "Area of triangle= "<< ar;
}

void arcir()
{
	float r, ar;
	cout<< "Enter radius of circle: ";
	cin>> r;
	ar=3.14*r*r;
	cout<< "Area of circle= " << ar;
}

void arrect()
{
	float l,b,ar;
	cout<< "Enter sides of rectangle: ";
	cin>>l;
	cin>>b;
	ar=l*b
	cout<< "Area of rectangle= " << ar;
}

void main()
{
	clrscr();
	char ch;
	do
	{
		cout<< "Menu: \n";
		cout<< " 1. Area of triangle\n 2. Area of circle\n 3. Area of rectangle\n" ;
		cout<< "Enter choice :";
		cin>> ch
		switch(ch)
		{
			case '1':	artri();
			case '2':	arcir();
			case '3':	arrect();
			default:	cout<< "Wrong option!"
		}
	}(while(ch!=4);
	getch();
} 	