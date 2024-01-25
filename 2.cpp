/*
2. WAP to add two distances using binary plus (+) operator overloading.
*/
#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int ft = 0, float in = 0.0) : feet(ft), inches(in) {}

    Distance operator+(const Distance& d) {
        int totalFeet = feet + d.feet;
        float totalInches = inches + d.inches;

        if (totalInches >= 12.0) {
            totalFeet++;
            totalInches -= 12.0;
        }

        return Distance(totalFeet, totalInches);
    }

    void display() {
        std::cout << "Feet: " << feet << " Inches: " << inches << std::endl;
    }
};

int main() {
    Distance d1(5, 6.5);
    Distance d2(3, 10.2);

    Distance sum = d1 + d2;

    sum.display(); // Output: Feet: 9 Inches: 4.7

    return 0;
}
