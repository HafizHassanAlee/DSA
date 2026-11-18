#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout <<"Enter The Numbers with Gap Among them :";
    cin>>n1>>n2>>n3;
    
    if (n1>n2 && n1>n3) {
        cout<<n1<<" Is Largest";
    } else if (n2>n1 && n2>n3) {
        cout<<n2<<" Is Largest";}
    else if (n3>n1 && n3>n2) {
        cout<<n3<<" Is Largest";}
    else {
        cout<<"Enter Input Was Invalid";
    }

}