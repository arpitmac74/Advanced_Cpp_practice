#include <iostream>

using namespace std;

void Test(int value){
    cout<<value<<endl;
}

int main(){
    Test(7);

    void (*pTest)(int) = Test;


    pTest(8);

    return 0;
}