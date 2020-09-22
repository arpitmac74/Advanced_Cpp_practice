#include<stdio.h>
#include<iostream>
#include<string.h>

class Test{
private:
int x;
std::string name;

public:
Test()
    :x(10),name("oshi")
{
    std::cout<<x<<std::endl;
    std::cout<<name<<std::endl;
    }
};



int main(){

    Test e;
    return 0;
}