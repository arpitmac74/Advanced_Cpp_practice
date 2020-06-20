#include <iostream>
using namespace std;


class Animal{
    public:
    virtual void speak() = 0;
};

class Dog:public Animal{
    public:
    virtual void speak(){
        cout<<"woof!"<<endl;
    }
};
class Labrador:public Dog{
    public:
    Labrador(){
        cout<<"new labrador"<<endl;
    }
    virtual void run(){
        cout<<"labrador run"<<endl;
    }
};

void woof(Animal &a){
    a.speak();
}
int main(){
    
    Labrador lab;
    lab.speak();
    lab.run();
    
    Animal *animals[5];
    animals[0] = &lab;

    animals[0]->speak();

    woof(lab);

    

    return 0;
}