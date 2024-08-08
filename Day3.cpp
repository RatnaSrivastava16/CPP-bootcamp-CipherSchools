#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    cout<<"Enter a value for a: "<<endl;
    cin>>*p1;
    cout<<"Enter a value for b: "<<endl;
    cin>>*p2;
    cout<<"Enter a value for c: "<<endl;
    cin>>*p3;
    int sum = *p1 + *p2 + *p3;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of c: "<<c<<endl;
    cout<<"Sum of a, b, c is: "<<sum<<endl;
    
    return 0;
}
