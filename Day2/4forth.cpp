#include<iostream>
#include<cmath>
using namespace std;
double sqrtCalculater(double x){
    return sqrt(x);
}
double squareCalculater(double x){
    return x*x;
}
int main()
{
    double num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    double sqrtCalculate = sqrtCalculater(num);
    double squareCalculate = squareCalculater(num);
    cout<<"The Square Root of "<<num<<" is: "<<sqrtCalculate<<endl;
    cout<<"The Square of "<<num<<" is: "<<squareCalculate<<endl;
    return 0;
}