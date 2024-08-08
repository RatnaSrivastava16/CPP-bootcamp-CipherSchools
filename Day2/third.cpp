#include<iostream>
using namespace std;
int sumCalculater(int x, int y, int z){
    int sum_of_three = x + y + z;
    return sum_of_three;
}
int main()
{
    int num1, num2, num3;
    cout<<"Enter 3 numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    int sum = sumCalculater(num1, num2, num3);
    cout<<"The sum of "<<num1<<", "<<num2<<", "<<num3<<" is: "<<sum<<endl;
    return 0;
}
