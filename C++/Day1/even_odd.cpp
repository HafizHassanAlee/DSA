#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter The Number :"<<endl;
    cin>>n;

    if(n && n>0){
    if (n%2==0){
    cout<<"Number is Even.";}
    else {
    cout<<"Number is Odd.";}
} else {
    cout<<"Enter Valid Input.."<<"\n";
}
}