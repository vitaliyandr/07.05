#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

double distance(Point p1, Point p2) {
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1 = { 0, 0 };
    Point p2 = { 3, 4 };
    double dist = distance(p1, p2);
    cout << "Distance: " << dist << endl;

    return 0;
}
