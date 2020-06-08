#include <iostream>
using namespace std;


template <class T>
class Test{
    private:
    T obj1;
    T obj2;
    public:
    Test(T obj1, T obj2){
        this->obj1 = obj1;
        this->obj2 = obj2;
    }

    void print(){
        cout<<obj1<<obj2<<endl;
    }
};

int main(){
    Test<int> name(10,10);


    name.print();

    
}