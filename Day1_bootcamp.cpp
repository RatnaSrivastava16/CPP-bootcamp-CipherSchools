#include<iostream>
using namespace std;
int main()
{
    int num1, num2, operation;;
    cout<<"Please enter two numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    
    cout<<"Enter which operation do you want to perform according to the below list : "<<endl;
    cout<<"Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter 5 for Modulus\nEnter 0 for exit"<<endl;
    
    while(true){
        cin>>operation;
        switch(operation){
            case 0:
            cout<<"Thank you for using my calculator."<<endl;
                exit(0);
            case 1:
                cout<<"Addition of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Subtraction of "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
                break;
            case 4:
                cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<num1/num2<<endl;
                break;
            case 5:
                cout<<"Modulus of "<<num1<<" and "<<num2<<" is : "<<num1%num2<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }
    return 0;
}
