/* Given three points (x1, y1), (x2, y2) and (x3, y3),
 write a program to check if the all three points fall on one straight line */
#include<iostream>

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, slope1,slope2;
    cout << "Enter points (x1, y1)" << endl;
    cin >> x1 >> y1;
    cout << "Enter points (x2, y2)" << endl;
    cin >> x2 >> y2;
     cout << "Enter points (x3, y3)" << endl;
    cin >> x3 >> y3;

    slope1=(y2 - y1) / (x2 - x1);
    slope2=(y3 - y2) / (x3 - x2);
    
    if(slope1 == slope2){
        cout<<"all three points fall on one straight line";
    }
    else{
        cout<<"all three points are not fall in one straight line";
    }
}