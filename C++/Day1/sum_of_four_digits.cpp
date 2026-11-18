#include<iostream>
using namespace std;
int main(){
    int n;
    int n1,n2,n3,n4;
    cout <<"Enter The Four Digit Number :"<<endl;
    cin>>n;
    
    if(n>999 && n<10000) {
    n1 = n/1000;
    n2 = (n/100)%10;
    n3 = (n/10)%10;
    n4 = n%10;

    cout<< n1+n2+n3+n4<<endl;
    

    } else {
        cout<<"Enter a Four Digit Number Only"<<endl;
    }

}