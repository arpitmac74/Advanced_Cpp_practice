#include <iostream>
using namespace std;

template<class T>
void print(T n){
    cout<<"template function"<<n<<endl;
}

void print(int value){
    cout<<"non template function"<<value<<endl;
}
template<class T>
void show(){
    cout<<T()<<endl;
}

int main(){
    print<string>("hello");
    print<int>(10);
    print("string");
    print<>(12);

    show<int>();

    return 0;
}