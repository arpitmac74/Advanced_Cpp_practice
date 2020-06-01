#include <iostream>
using namespace std;

class Test{
    private:
    int id;
    string name;
    
    public:
    Test(): id(0), name(""){
    }

    Test(int id, string name): id(id), name(name){
    }

    const Test &operator=(const Test &other){
        id = other.id;
        name = other.name;
        cout<<"assignment running"<<endl;
        return *this;
    }

    void print(){
        cout<<id<<":"<<name<<endl;
    }
    Test(const Test &other){
        cout<<"copy constructor"<<endl;
        id= other.id;
        name = other.name;
    }
};


int main(){
    // we need a constructor to referecnce the values
    Test test1(10,"selena");
    cout<<"test1"<<endl;
    test1.print();

    Test test2(20,"noela");
    cout<<"test2"<<endl;
    test2=test1;
    test2.print();

    Test test3(30,"oshi");
    //test3=test2=test1;
    
    test3.operator=(test2);
    cout<<"test3"<<endl;
    test3.print();

    Test test4 = test1;
    //since it is a copy initialization
    cout<<"test4"<<endl;  //no assignment running here so we need a copy onstructor 
    test4.print();

    
    return 0;
}