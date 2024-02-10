# Lab 6: Inheritance and Polymorphism

Welcome to the Lab 6 repository, focused on demonstrating the core concepts of Inheritance and Polymorphism in C++. This lab is designed as a hands-on exercise to explore object-oriented programming principles through the implementation of various shapes and their behaviors.

## Overview
This project simulates a simple shape hierarchy system using C++. It defines base classes for two-dimensional and three-dimensional shapes, along with derived classes for specific shapes like squares, triangles, circles, cylinders, and more. The primary goal is to showcase how inheritance and polymorphism can be utilized to create a flexible and scalable system for managing shapes.

## Repository Structure
- `Shapes.cpp/h`: Implements the shape classes, including the logic for area, volume calculations, and displaying shape details.
- `main.cpp`: The entry point of the application that demonstrates the functionalities of the implemented shape classes.
- `Lab 6.pdf`: Provides detailed instructions, objectives, and requirements for the lab.

## Features
- **Shape Hierarchy:** Demonstrates inheritance with base and derived classes for different types of shapes.
- **Polymorphism:** Utilizes virtual functions and polymorphism to interact with shapes generically.
- **Operator Overloading:** Implements operator overloading for comparing shapes based on their area or volume.
- **Dynamic Memory Management:** Showcases the use of pointers and dynamic memory allocation to manage shape objects.

## How to Run
1. Ensure you have a C++ compiler installed that supports C++11 or newer.
2. Compile the program using your preferred development environment or command line.

```
g++ -std=c++11 -o lab6 main.cpp Shapes.cpp
```
Run the compiled executable to see the demonstration of shape operations.

```
./lab6
```
## Contributing
We welcome contributions to improve the lab exercises or extend the functionality of the shape hierarchy. To contribute:
1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Commit your changes.
4. Push to the branch.
5. Submit a pull request.

## License
This project is licensed under the MIT License - see the LICENSE.md file for details.

## Acknowledgments
This project was created for educational purposes to help students understand the principles of object-oriented programming in C++.
Special thanks to all students and educators who contribute to and benefit from this repository.
