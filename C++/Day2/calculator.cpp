#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=0;
    char op;
    cout<<"Enter The First Number of Calculation : ";
    cin>>n1;
    cout<<"Enter The Second Number of Calculation : ";
    cin>>n2;
    cout<<"Enter The Operator of Calculation : ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    case '%':
        cout<<n1%n2;
        break;    
    default:
        cout<<"Input was not Valid";
        break;
    }



}