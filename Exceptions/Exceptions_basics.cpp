#include <iostream>
using namespace std;

void wehaveerror(){
    bool error = false;
    bool error_2 = true;

    if(error){
        throw "yolo";
    }
    if(error_2){
        throw 8;
    }
}

int main()
{
    try{
    wehaveerror();
    }
    catch(int e){
        cout<<"First Error"<<" "<<e<<endl;
    }
    catch(char const* e)
    {
        cout<<"second error is"<<" "<<e<<endl;;
    }
    cout<<"and we are still running after catching the error"<<endl;
    return 0;
}