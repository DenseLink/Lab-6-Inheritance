#include "Shapes.h"
#include <string>
#include <iostream>
#include <iomanip>
#define PI 3.14159f
using namespace std;





Square::Square(float base1, string Name)
	{
		this->base1 = base1;
		this->Name = Name;
	}
Triangle:: Triangle(float base1, float base2, string Name)
	{
		this->base1 = base1;
		this->base2 = base2;
		this->Name = Name;
	}
Circle::Circle(float base1, string Name)
	{
		this->base1 = base1;
		this->Name = Name;
	}
TriangularPyramid::TriangularPyramid(float height, float base1, float base2, string Name)
	{
		this->base1 = base1;
		this->height = height;
		this->base2 = base2;
		this->Name = Name;
	}
Cylinder::Cylinder(float base1, float height, string Name)
	{
		this->base1 = base1;
		this->height = height;
		this->Name = Name;
	}
Sphere::Sphere (float base1, string Name)
	{
		this->base1 = base1;
		this->Name = Name;
	}




float Circle::Area() const
{
	float y;
	float cir = base1;
	y = cir * cir * PI;
	
	return y;
}
float Triangle::Area() const
{
	float y;
	y = base1 * base2 * 0.5f;
	return y;
}
float Square::Area() const
{
	float y;
	y = base1 * base1;
	return y;
}
void Shape2D::ShowArea() const
{
	cout << std::fixed << setprecision(2);
	cout << "The area of the " << this->GetName2D() << " is: ";
	cout << this->Area() << endl;
}
bool Shape2D::operator>(const Shape2D& rhs) const
{
	bool value = false;
	float area = rhs.Area();
	if (this->Area() > area)
	{
		value = true;
	}
	return value;
}

bool Shape2D::operator<(const Shape2D& rhs) const
{
	bool value = false;
	float area = rhs.Area();
	if (this->Area() < area)
	{
		value = true;
	}
	return value;
}
bool Shape2D::operator == (const Shape2D& rhs) const
{
	bool value = false;
	float area = rhs.Area();
	if (this->Area() == area)
	{
		value = true;
	}
	return value;
}

void Circle::Scale(float scaleFactor)
{
	base1 = scaleFactor * base1;
}
void Triangle::Scale(float scaleFactor)
{
	
	base1 = scaleFactor * base1;
	base2 = scaleFactor * base2;
}
void Square::Scale(float scaleFactor)
{
	float x;
	x = base1;
	base1 = scaleFactor * x;
}
void Circle::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The area of the " << GetName2D() << " is: " << Circle::Area() << endl;
	cout << "Radius: " << base1 << endl;
}
void Triangle::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The area of the " << GetName2D() << " is: " << Triangle::Area() << endl;
	cout << "Base: " << base1 << endl;
	cout << "Height: " << base2 << endl;
}
void Square::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The area of the " << GetName2D() << " is: " << Square::Area() << endl;
	cout << "Length of a side: " << base1 << endl;
}



float Sphere::Volume() const
{
	float y;
	float cir = base1;
	float z = 4 / 3;
	y = (cir * cir * cir) * PI * z * 1.3333333333 ;

	return y;
}
float TriangularPyramid::Volume() const
{
	float y;
	float z = 4 / 3;
	y = base1 *height *  base2 * z/6;
	return y;
}
float Cylinder::Volume() const
{
	float y;
	y = base1 * height * height * PI;
	return y;
}
void Shape3D::ShowVolume() const
{
	cout << std::fixed << setprecision(2);
	cout << "The volume of the " << this->GetName3D() << "is: ";
	cout << this->Volume() << endl;
}
bool Shape3D::operator>(const Shape3D& rhs) const
{
	bool value = false;
	float volume = rhs.Volume();
	if (this->Volume() > volume)
	{
		value = true;
	}
	return value;
}
bool Shape3D::operator<(const Shape3D& rhs) const
{
	bool value = false;
	float volume = rhs.Volume();
	if (this->Volume() < volume)
	{
		value = true;
	}
	return value;
}
bool Shape3D::operator == (const Shape3D& rhs) const
{
	bool value = false;
	float volume = rhs.Volume();
	if (this->Volume() == volume)
	{
		value = true;
	}
	return value;
}

void Sphere::Scale(float scaleFactor)
{
	float newbase = base1 * scaleFactor;
	base1 = newbase;
}
void TriangularPyramid::Scale(float scaleFactor)
{
	
	base1 = base1 * scaleFactor;
	//base2 = base2 * scaleFactor;
	//height = height * scaleFactor;
}
void Cylinder::Scale(float scaleFactor)
{
	base1 = base1 * scaleFactor;
	height = height * scaleFactor;
}
void Sphere::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The volume of the " << GetName3D() << " is : " << Sphere::Volume() << endl;
	cout << "The area of the " << GetName2D() << " is : " << (PI * base1 * base1) << endl;
	cout << "Radius: " << base1 << endl;
}
void TriangularPyramid::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The volume of the " << GetName3D() << " is: " << TriangularPyramid::Volume() << endl;
	cout << "The height is: " << height << endl;
	cout << "The area of the " << GetName2D() << "is: " << base1 * base2 *0.5f <<endl;
	cout << "Base: " << base1 << endl;
	cout << "Height: " << base2 << endl;
}
void Cylinder::Display() const
{
	cout << std::fixed << setprecision(2);
	cout << "The volume of the " << GetName3D() << " is: " << Cylinder::Volume() << endl;
	cout << "The height is: " << base1 << endl;
	cout << "The area of the " << GetName2D() << "is: " << height*height * PI << endl;
	cout << "Radius: " << height << endl;
}
Shape::~Shape()
{

}