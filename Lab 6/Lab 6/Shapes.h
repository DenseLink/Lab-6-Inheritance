#pragma once
using namespace std;
#include <string>
#define PI 3.14159f
class Shape
{
public:
	virtual void Scale(float scaleFactor) = 0;
	virtual void Display() const = 0;
	virtual ~Shape() = 0;
};
class Shape2D : virtual public Shape
{
public:
	virtual float Area() const = 0;
	void ShowArea() const;
	virtual string GetName2D() const = 0;
	bool operator>(const Shape2D& rhs) const;
	bool operator<(const Shape2D& rhs) const;
	bool operator==(const Shape2D& rhs) const;
};
class Shape3D : virtual public Shape
{
public:
	virtual float Volume() const = 0;
	void ShowVolume() const;
	virtual string GetName3D() const = 0;
	bool operator>(const Shape3D& rhs) const;
	bool operator<(const Shape3D& rhs) const;
	bool operator==(const Shape3D& rhs) const;
};
class Square : virtual public Shape2D
{
//public:
	string Name;
	float base1;
public:
	Square(float base1 = 0.0, string Name = "Square");

	string GetName2D() const
	{
		return Name;
	}
	float Area() const;
	void Display() const;
	void Scale(float scaleFactor);
};
class Triangle : virtual public Shape2D
{
private:
	string Name;
	float base1;
	float base2;
public:

	Triangle(float base1 = 0.0, float base2 = 0.0, string Name = "Triangle");
	string GetName2D() const
	{
		return Name;
	}
	float Area() const;
	void Display() const;
	void Scale(float scaleFactor);
};
class Circle : virtual public Shape2D
{
public:
	string Name;
	float base1;

	Circle(float base1 = 0.0, string Name = "Circle");
	string GetName2D() const
	{
		return Name;
	}
	float Area() const;
	void Display() const;
	void Scale(float scaleFactor);
};
class TriangularPyramid : virtual public Shape3D, virtual private Triangle
{
private: 
	float height;
	string Name;
	float base1;
	float base2;
public:
	TriangularPyramid(float height = 0.0, float base1 = 0.0, float base2 = 0.0, string Name = "TriangularPyramid");
	string GetName3D() const
	{
		return Name;
	}
	float Volume() const;
	void Display() const;
	void Scale(float scaleFactor);
};
class Cylinder : virtual public Shape3D, virtual public Circle
{
public:
	string Name;
	float base1;
	float height;

	Cylinder(float base1 = 0.0, float height = 0, string Name = "Cylinder");
	string GetName3D() const
	{
		return Name;
	}
	float Volume() const;
	void Display() const;
	void Scale(float scaleFactor);
};
class Sphere : virtual public Shape3D, virtual private Circle
{
public:
	string Name;
	float base1;

	Sphere(float base1 = 0.0, string Name = "Sphere");
	string GetName3D() const
	{
		return Name;
	}
	float Volume() const;
	void Display() const;
	void Scale(float scaleFactor);
};
