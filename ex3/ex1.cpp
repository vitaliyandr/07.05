#include <iostream>

using namespace std;

struct Rectangle {
    int x;
    int y;
    int width;
    int height;
};

void moveRectangle(Rectangle& rect, int dx, int dy) {
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, int dw, int dh) {
    rect.width += dw;
    rect.height += dh;
}

void printRectangle(Rectangle rect) {
    cout << "x: " << rect.x << ", y: " << rect.y << ", width: " << rect.width << ", height: " << rect.height << endl;
}

int main() {
    Rectangle rect = { 0, 0, 10, 5 };
    moveRectangle(rect, 2, 3);
    resizeRectangle(rect, 3, 2);
    printRectangle(rect);

    return 0;
}
