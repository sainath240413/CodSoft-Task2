#include<iostream>
#include<cstdlib>
using namespace std;
double sum(double num1,double num2){
    return num1+num2;
}
double difference(double num1,double num2){
    return num1-num2;
}
double product(double num1,double num2){
    return num1*num2;
}
double divide(double num1,double num2){
    return num1/num2;
}
int main(){
    double num1,num2;
    char operation;
    cout<<"Enter number1:";
    cin>>num1;
    cout<<"enter operation(+,-,*,/):";
    cin>>operation;
    cout<<"Enter number2:";
    cin>>num2;
    switch(operation){
        case '+':
            cout<<sum(num1,num2);
            break;
        case '-':
            cout<<difference(num1,num2);
            break;
        case '*':
            cout<<product(num1,num2);
            break;
        case '/':
            if(num2!=0){
                cout<<divide(num1,num2);
            }
            else{
                cout<<"division with 0 is not allowed";
            }
            break;
        default:
            cout<<"Invalid operator! please use +,-,*,or /."<<endl;
    }
    return 0;
}