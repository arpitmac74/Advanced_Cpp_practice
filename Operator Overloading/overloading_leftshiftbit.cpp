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

    friend ostream &operator<<(ostream &a, const Test &test){
        a << test.id <<":"<< test.name<<endl;;
        return a;
    }
};

int main(){
    Test test1(10,"mike");
    Test test2(20,"shanky");
    cout<< test1<<test2<<endl;

    return 0;
}