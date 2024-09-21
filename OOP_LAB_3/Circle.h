#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include <iostream>

class Circle {
private:
    double x, y;  
    double R;     

public:
    
    Circle();

    
    Circle(double x, double y, double R);

    
    Circle(const Circle& other);

    
    ~Circle();

    
    void setX(double x);
    void setY(double y);
    void setR(double R);

    
    double getX() const;
    double getY() const;
    double getR() const;

    
    double area() const;

    
    double circumference() const;

    
    void display() const;

   
    std::string toString() const;

    
    void input();
};

#endif
