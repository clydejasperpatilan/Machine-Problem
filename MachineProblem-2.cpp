// Machine Problem # 2
// Group 10
// Igaya, Mark Francis
// Patilan, Clyde Jasper
// Sumadchat, Teri


#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;


int main() 
{


	double radius, height, length, width; 
	char shape, res;
	const double pi = 3.1415926;
	double lateralA;
	
	do
	{
		
	cout<<"		         Geometric Calculator\n		Programmed by: Patilan, Igaya, Sumadchat \n\n\n\n";
	cout<< "Shape Choices:  C = Cone P = Pyramid  S = Sphere  \n";
	cout<< "Input chosen shape: ";
	cin >> shape;
	
		if (shape == 'C' || shape == 'c' || shape == 'P' || shape == 'p' || shape == 'S' || shape == 's');
		cout << endl;

	cout << fixed << showpoint << setprecision(2);
	
	switch (shape)
	{
		case 'C':
		case 'c':
		{	
			cout<<"Calculate Volume and Area of a Cone\n";
			cout << "Enter the radius: "<<endl;
			cin >> radius;
			
			cout << "\nEnter the height: " << endl;
			cin >> height;
			
			double volumeA = pi * ( radius * radius ) * height/3 ;
			double lateralareaA = pi * radius * sqrt((radius*radius) + (height*height));
			double baseareaA = pi * (radius * radius);
			double surfareaA = lateralareaA + baseareaA;
			
			cout << endl;
			
			cout << "The Volume of the Cone is = " <<  volumeA << endl;
			cout << "The Lateral Area of the Cone is = " << lateralareaA << endl;
			cout << "The Base Area of the Cone is = " << baseareaA<< endl;
			cout << "The Total Surface Area of the Cone is = " << surfareaA << endl;

			break;
		}
		case 'P':
		case 'p':
		{
			
			cout << "Calculate Volume and Area of a Pyramid\n";	

			
			cout << "Enter the Length: " << endl;
			cin >> length;
			cout << "Enter the Width: " << endl;
			cin >> width;
			cout << "Enter the Height: " << endl;
			cin >> height;
			
			double volume2 =  ((length * width * height)/3);
			double lateralarea2 = length    *   sqrt(pow((width/2)*(width/2),2 )+ pow(height,2)) + width * sqrt(pow((length/2),2) + pow(height,2));
			double basearea2 = length * width;
			double surfarea2 = lateralarea2 + surfarea2 ;
			
			cout<< "The Volume of the Pyramid is: " << volume2<< endl;
			cout<< "The Lateral Area of the Pyramid is: " << lateralarea2 << endl;
			cout<< "The Base Area of the Pyramid is: " << basearea2 << endl;
			cout<< "The Total Surface Area of the Pyramid is: " << surfarea2 << endl;
			
			break;
		}
		case 'S':
		case 's':
		{
			cout << "Calculate the Volume and Surface Area of the Sphere\n";
			cout << "Enter the radius:" << endl;
			cin >> radius;
			
			double volume3 =   pow(radius,3)* 4/3 * pi;
			double surfarea3 = pow(radius,2)*4*pi;
			
			cout << "The Volume of the sphere is: " << volume3 << endl;
			cout << "The Surface Area of the sphere is:	" <<  surfarea3 << endl;
		
			break;
		}
	} 
	
	cout << endl;
	cout << endl;
	cout << "\nDo you want to start a new calculation? <Y/N>" << endl;
	cin >> res;

			if (res == 'Y' || res == 'y')
				system("cls");


	} while (res == 'Y' || res == 'y');

	getch();
	return 0;
	
}
