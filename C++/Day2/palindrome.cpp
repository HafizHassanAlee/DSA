#include<iostream>
using namespace std;
int main(){
    int n=0;
    int n1, n2, n3;
    cout<<"Enter the three Digit Number to check :";
    cin>>n;
    n1 = n/100;
    n2 = (n/10)%10;
    n3 = n%10;
    cout<<n3<<n2<<n1<<endl;
    if (n1 != n3){
        cout<<"NUmber is not Palindrome";
    } else{
        cout<<"NUmber is Palindrome";
    }

}