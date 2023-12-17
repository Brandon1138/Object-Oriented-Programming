#include <iostream>
#include <cmath>

class Punct {
private:
    float x, y;

public:
    Punct(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

    void display() const {
        std::cout << "(" << x << ", " << y << ")" <<std::endl;
    }

    static float distance(const Punct& a, const Punct& b) {
        return static_cast<float>(std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2)));
    }

};

int main() {
    Punct pointA(1.0, 2.0);
    Punct pointB(4.0, 6.0);

    std::cout << "Point A: ";
    pointA.display();
    std::cout << "Point B: ";
    pointB.display();

    std::cout << "Distance between A and B: " << Punct::distance(pointA, pointB) << std::endl;

    return 0;
}