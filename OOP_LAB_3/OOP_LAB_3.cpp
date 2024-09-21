#include "Circle.h"

int main() {
    
    Circle circle1;
    circle1.input();
    circle1.display();

    
    Circle circle2 = circle1;
    circle2.display();

    return 0;
}
