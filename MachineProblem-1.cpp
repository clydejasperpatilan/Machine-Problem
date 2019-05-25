// MACHINE PROBLEM #1 
// Group 10 
// Igaya, Mark Francis
// Patilan, Clyde Jasper
// Sumadchat, Teri 


#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double x, y, z;
	char start;
	const double pi = 3.1415926;
	int tri;
	
	
	cout << fixed << showpoint << setprecision(2) << endl;
do
	{
		cout<<"			Triangle Shape Calculator \n	       Programmed by: Patilan, Igaya, Sumadchat \n\n\n";
		cout << "Length of Side x: "; cin >> x;
		cout << "Length of side y: "; cin >> y;
		cout << "Length of side z: "; cin >> z;
		double per = x + y + z;
			
	double xx = ((y*y) + (z*z) - (x*x))/(2*y*z);
	double anglex = acos(xx)* 180 / pi;
	
	double yy = (((x*x) + (z*z) - (y*y))/(2*z*x));
	double angley = acos(yy)* 180 / pi;
	
	double zz = (((x*x) + (y*y) - (z*z))/(2*y*x));
	double anglez = acos(zz)* 180 / pi;
	
	if ( (x + y <= z )){
			cout << "\n\nInvalid \nThe values should be x + y > z\n\n" << endl;
			start = 'Y';
				}
			cout << endl;
	
	if (int(anglex) == 90 || int(angley) == 90 || int(anglez) == 90)
		cout << "Type of triangle =	Right ";

	else if (anglex > 90 || angley > 90 || anglez > 90  )
		cout << "Type of triangle = Obtuse ";
	else if(anglex == angley && angley == anglez)
		;	
	else 
		cout << "Type of triangle = Acute ";
		
			if (x == y && y == z) {
				cout << "Type of triangle = Equilateral Triangle";
				const int tri = 1;
			}
			else if (x == y || y == z || x == z) {
				cout << "Isosceles Triangle";
			}
			else if (x != y && y != z && x != z) {
				cout << "Scalene Triangle";
			}
		
		double Herons = per/2;
		double Hx = Herons-x;
		double Hy = Herons-y;
		double Hz = Herons-z;
		double area = sqrt(Herons*Hx*Hy*Hz);
		double apothem = 2 * area / per;
		double circumcenter = (x*y*z)/sqrt((x+y+z)*(y+z-x)*(z+x-y)*(x+y-z));
		cout << endl;
		
		if (per/3 == x ){
			cout << "Apothem:"<< apothem << "	units" << endl;
		}
		else
			{
			cout << endl;
			cout << "An irregular polygon with sides of different lengths do not have an apothem\n";
			}
		cout << "Angle x:"<< anglex << " degrees"<< endl;
		cout << "Angle y:"<< angley << " degrees"<< endl;
		cout << "Angle z:"<< anglez << " degrees"<< endl;
		cout << "Total Angle: " << anglex+angley+anglez << " degrees"<<endl;
		cout << "Area: " << area << " sqr. units"<< endl; 
		cout << "Perimeter: " << int(per) << " units" << endl;
		cout << "Circumcenter: " << circumcenter << " units" << endl;
	
		cout << "\n\n\nDo you want to start a new calculation? <y/n>:";
		cin >> start;
		if (start == 'Y' || start == 'y')
			system("cls");
		
			
	} while (start == 'Y' || start == 'y');
	
	getch ();
	return 0;	
}

