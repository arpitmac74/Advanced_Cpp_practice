#include <iostream>

using namespace std;
template <class T,class S>
auto test(T value1, S value2)->decltype(value2){//the function needs to know which kind of value needs to be passed 
    return value1+value2;
}

int get(){
    return 999;
}

auto test2()->decltype(get()){
    return get();

}
int main(){
    auto num = 7;

    auto name = "jstring";

    cout<<test2()<<endl;

    return 0;

}