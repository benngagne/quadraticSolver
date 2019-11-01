#include <iostream>
#include <cmath>

using namespace std;

struct Roots {
    double root1;
    double root2;
};

struct Vertex {
    double x;
    double y;
};

Roots quadraticFormula(double x1, double x2, double x3) {
    double numerator1 = -x2 + sqrt(x2*x2 - 4*x1*x3);
    double numerator2 = -x2 - sqrt(x2*x2 - 4*x1*x3);

    Roots result = {numerator1 / (2*x1), numerator2 / (2*x1)};
    return result;
}

Vertex quadraticVertex(double x1, double x2, double x3) {
    double xValue = -(x2) / (2*x1);
    double yValue = (x1*xValue*xValue + x2*xValue + x3);

    Vertex result = {xValue, yValue};
    return result;
}

int main() {
    double x1;
    double x2;
    double x3;

    cout << "x1: ";
    cin >> x1;
    cout << "x2: ";
    cin >> x2;
    cout << "x3: ";
    cin >> x3;
    cout << endl;

    cout << "root 1: " << quadraticFormula(x1,x2,x3).root1 << endl;
    cout << "root 2: " << quadraticFormula(x1,x2,x3).root2 << endl;

    cout << "--------------------" << endl;
    
    cout << "x-vertex: " << quadraticVertex(x1,x2,x3).x << endl;
    cout << "y-vertex: " << quadraticVertex(x1,x2,x3).y << endl;
    if (x1 > 0) {
    cout << "facing: up" << endl;
    } else if (x1 < 0) {
    cout << "facing: down" << endl;
    } else {
    cout << "facing: n/a" << endl;
    }
    cout << endl;

    cout << "------------\nMADE BY BENN\nbenngagne.ca" << endl;
    return(0);
}
