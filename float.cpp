#include<iostream>
using namespace std;
int main(){
    float d=34.6F;
    long double e=123.6L;
    cout<<"The value of d is:"<<d<<endl<<"The value of e:"<<e;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    return 0;

}