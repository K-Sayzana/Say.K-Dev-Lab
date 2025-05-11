#include <iostream>
#include <cmath>
#include "root.hpp"
using namespace std;

void root(int a, int b, int c) {
    double disc = b * b - 4 * a * c; 

    if (disc < 0 || a == 0) {
        cout << "No real solution\n";
    } else {
        double root1 = (-b + sqrt(disc)) / (2 * a);
        double root2 = (-b - sqrt(disc)) / (2 * a);
        
        cout << "Root1: " << root1 << "\n";
        cout << "Root2: " << root2 << "\n";
    }
}
