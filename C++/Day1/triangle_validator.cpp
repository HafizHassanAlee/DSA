#include<iostream>
using namespace std;
int main(){
    int n;
    int n1,n2,n3;
    cout <<"Enter The four sides of Triangle :";
    cin>>n1>>n2>>n3;
    if (n1 && n2 && n3) {
        cout<<"Valid Triangle \n";
        if (n1==n2 && n2==n3){
        cout<<"Equilateral Triangle";
        } else if (n1==n2 || n2==n3 || n1==n3) {
            cout<<"Isosceles Triangle";
        } else if (n1!=n2 || n2!=n3 || n1!=n3) {
            cout<<"Scalene Triangle";
        } else {
            cout<<"Enter Valid Input";
        }

    } else {
        cout<<"Enter a Four Digit Number Only"<<endl;
    }

}