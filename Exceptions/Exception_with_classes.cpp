#include <iostream>
using namespace std;

class wehaveerror
{
    public:
    wehaveerror()
    {
        char *tempmem = new char[999999999999];
        delete[] tempmem;
    }
};
int main()
{
    try{
    wehaveerror wow;
    }
    catch(bad_alloc &e){
        cout<<"error1"<<" "<< e.what()<< endl;
    }
    cout<<"our code is still running after catching the error";
    return 0;
}