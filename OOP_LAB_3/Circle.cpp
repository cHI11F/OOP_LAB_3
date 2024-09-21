#include "Circle.h"
#include <iostream>


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


Circle::Circle() : Circle(0, 0, 1) {
    std::cout << "Викликано конструктор без параметрів" << std::endl;
}


Circle::Circle(double x, double y, double R) : x(x), y(y), R(R) {
    std::cout << "Викликано конструктор ініціалізації з параметрами" << std::endl;
    if (R <= 0) {
        this->R = 1;  
        std::cout << "Некоректний радіус, встановлено за замовчуванням: R = 1" << std::endl;
    }
}


Circle::Circle(const Circle& other) : x(other.x), y(other.y), R(other.R) {
    std::cout << "Викликано конструктор копіювання" << std::endl;
}


Circle::~Circle() {
    std::cout << "Викликано деструктор" << std::endl;
}


void Circle::setX(double x) { this->x = x; }
void Circle::setY(double y) { this->y = y; }
void Circle::setR(double R) {
    if (R > 0) {
        this->R = R;
    }
    else {
        std::cout << "Некоректний радіус!" << std::endl;
    }
}


double Circle::getX() const { return x; }
double Circle::getY() const { return y; }
double Circle::getR() const { return R; }


double Circle::area() const {
    return M_PI * R * R;
}


double Circle::circumference() const {
    return 2 * M_PI * R;
}


void Circle::display() const {
    std::cout << "Центр кола: (" << x << ", " << y << "), Радіус: " << R << std::endl;
    std::cout << "Площа кола: " << area() << std::endl;
    std::cout << "Довжина кола: " << circumference() << std::endl;
}


std::string Circle::toString() const {
    return "Circle [x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", R: " + std::to_string(R) + "]";
}


void Circle::input() {
    std::cout << "Введіть координати центру (x та y): ";
    std::cin >> x >> y;

    do {
        std::cout << "Введіть радіус (R > 0): ";
        std::cin >> R;
        if (R <= 0) {
            std::cout << "Некоректний радіус! Спробуйте ще раз." << std::endl;
        }
    } while (R <= 0);
}
