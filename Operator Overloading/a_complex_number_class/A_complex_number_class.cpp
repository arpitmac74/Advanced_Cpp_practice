#include <iostream>
using namespace std;
#include "complex.h"
using namespace oshi;


int main(){
    complex c1(2,3);
    complex c2 = c1;
    
    cout<<c1<<endl;
    return 0;
}