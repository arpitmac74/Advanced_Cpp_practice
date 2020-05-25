#include <iostream>
#include <exception>

using namespace std;

void gowrong(){
    bool error_1 = false;
    bool error_2 = true;

    if(error_1)
    {
        throw bad_alloc();
    }
    if(error_2)
    {
        throw exception();
    }
}

int main() {

    try{
        gowrong();
    }

    catch(exception &e)
    {
        cout<<"exception"<< e.what() << endl;
    }
    catch(bad_alloc &e)
    {
        cout<<"bad alloc"<< e.what() << endl;
    }
    return 0;
}