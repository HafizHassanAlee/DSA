#include<iostream>
using namespace std;
int main(){
    int marks,attendance;
    cout<<"Enter the Marks of Student : ";
    cin>>marks;
    cout<<"Enter the Attendance of Student : ";
    cin>>attendance;
    if (marks>0 && marks<100){}
    else{
        cout<<"Marks Input was not Valid!..";
        return 0;
    }
    if (marks>=50 && attendance >=75){
        if (marks>=90){
            cout<<"A";
        }
        else if(marks>=80){
            cout<<"B";
        }
        else if(marks>=70){
            cout<<"C";
        } else{
            cout<<"D";
        }
    } else if (marks>=50 && attendance <75){
        cout<<"Attendance short";
    } else{
        cout<<"Failed.";
    }
    







}