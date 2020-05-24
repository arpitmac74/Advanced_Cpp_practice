#include <iostream>
#include <exception>

using namespace std;

class myexception : public exception {
    public:
    virtual const char* what() const throw() {
        return "something bad happened";
    }
};
class Test{
    public:
    void gowrong(){
        throw myexception();
    }
};

int main() {
    Test test;

    try{
        test.gowrong();
    }
    catch(myexception &e){
        cout<< e.what() << endl;
    }
}