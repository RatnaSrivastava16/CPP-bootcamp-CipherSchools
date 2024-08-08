#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter three numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is greatest among all."<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is greatest among all."<<endl;
    }
    else{
        cout<<num3<<" is greatest among all."<<endl;
    }
    return 0;
}