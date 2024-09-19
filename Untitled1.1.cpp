#include <iostream>
using namespace std;
int main()
{
	float l,b,h,area,perimeter,s,pi,r;
	pi=3.14;
	
				cout<<"enter the hight of the tringale = ";
				cin>>h;
				cout<<"\n enter the base of the tringele = ";
				cin>>b;
				perimeter=0.5*h*b;
				area=h*b;
				cout<<" \nthe area = "<<area;
				cout<<"\n the perimeter of the tringale = "<<perimeter;
				
			
				cout<<"enter the radious  of the circle  = ";
				cin>>r;
				area=pi*r*r;
				perimeter=2*pi*r;
				cout<<"\n the area of the circle ="<<area;
				cout<<"\n the perimeter of the circle ="<<perimeter;
				
				cout<<"enter the hight of the rectangle = ";
				cin>>h;
				cout<<"\n enter the base of the rectangle = ";
				cin>>b;
				perimeter=2*(h+b);
				area=h*b;
				cout<<"\n the area of the rectangle ="<<area;
				cout<<"\n the perimeter of the rectangle ="<<perimeter;
			
				cout<<"\n enter one side of the sqare =";
				cin>>s;
				area=s*s;
				perimeter=4*s;
				cout<<"\n the area of the square ="<<area;
				cout<<"\n the perimeter of the square ="<<perimeter;
			
				
				

}
