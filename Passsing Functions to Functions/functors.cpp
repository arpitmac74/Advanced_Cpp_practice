#include <iostream>

using namespace std;


struct Test{
    public:
    virtual bool operator()(string &text)=0;
    virtual ~Test(){}
};
struct MatchTest : public Test{
    virtual bool operator()(string &text){
        return text == "oshi";
    }
};

void check(string text,Test &test){
    if(test(text)){
        cout<<"matched"<<endl;
    }
    else{
        cout<<"not matched"<<endl;
    }
}


int main(){


string texts ="oshi";

MatchTest m;

check(texts,m);

return 0;
}