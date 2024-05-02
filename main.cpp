#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,x2,y1,y2;
    cout<<"enter the value of  x1: ";
    cin>>x1;
     cout<<"enter the value of  x2: ";
    cin>>x2;
     cout<<"enter the value of  y1: ";
    cin>>y1;
     cout<<"enter the value of  y2: ";
    cin>>y2;
    double distance=sqrt(pow(x1-x2, 2) + pow(y2-y1, 2));

    cout<<"the distance between point 1 and point 2 is: "<<distance;
    return 0;
}













