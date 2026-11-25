#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=0,n3=0;
    cout<<"Enter Three Numbers with Spaces : ";
    cin >>n1>>n2>>n3;
    if (n1 && n2 && n3){}
    else 
        cout<<"Input was not Valid!..";

    if ((n1>n2 && n1<n3) || (n1>n3 && n1<n2))
    cout<<n1<<" is Second Largest";
    else if ((n2>n1 && n2<n3) || (n2>n3 && n2<n1))
    cout<<n2<<" is Second Largest";
    else 
    cout<<n3<<" is Second Largest";
}