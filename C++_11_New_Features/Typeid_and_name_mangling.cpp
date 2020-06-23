#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

    string value;

    //cout<<typeid(value).name()<<endl;
    decltype(value) name = "bobo";
    cout<<typeid(name).name()<<endl;
    cout<<name<<endl;
    return 0;
}