#include <iostream>
using namespace std;

int main(){
    //DATA TYPE AND ITS SIZE
    
    // cout<<"SIZE of int "<<sizeof(int)<<endl;
    // cout<<"SIZE of char "<<sizeof(char)<<endl;
    // cout<<"SIZE of float "<<sizeof(float)<<endl;
    // cout<<"SIZE of bool "<<sizeof(bool)<<endl;
    //basic input output
    // int a,b;
    // cin>>a>>b;
    // cout<<a+b<<endl;
    // cout<<a-b<<endl;
    // cout<<a*b<<endl;
    // cout<<a/b<<endl;
    // cout<<a%b<<endl;
    //if else
    int saving;
    cin>>saving;
    if(saving>=5000){
        cout<<"GO with 1st one"<<endl;
    }else if(saving>=3000){
        cout<<"GO with 2nd ones"<<endl;
    }else{
        cout<<"Go with freind"<<endl;
    }


    
    return 0;
}
