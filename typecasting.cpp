#include<iostream>
using namespace std;
int main(){
    int x=45,z=45.6;
    float y=175.8;

    cout<<"The value of x is "<<(float)x<<endl;
    cout<<"The vlaue of x is "<<float(x)<<endl;

    cout<<"The value of y is "<<(float)y<<endl;
    cout<<"The value of y is "<<float(y)<<endl;
    int c= int(y);

    cout<<"The expression is "<<x+y<<endl;
    cout<<"The expression is "<<x+int(y)<<endl;
    cout<<"The expression is " <<int(y)+int(z);


    return 0;

}