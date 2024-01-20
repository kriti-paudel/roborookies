#include <iostream>
#include <cmath>
using namespace std;

void drawCircle(int radius) {
    for (int x = -radius; x <= radius; ++x) {
        for (int y = -radius; y <= radius; ++y) {
            float distance = sqrt(x * x + y * y ); // sqrt=to calculate the squareroot of given number
            if (distance > radius - 0.5 && distance < radius + 0.5) 
			{
                cout << "k ";
            } else {
            	 cout << "  ";
            }
        }           
        

        cout << endl;
    }
}

int main() {
    int radius;
    
    // Input the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Draw the circle pattern
    drawCircle(radius);

    return 0;
}
