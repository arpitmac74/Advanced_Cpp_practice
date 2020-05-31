#include <iostream>
#include <set>

using namespace std;

class Test{
    int id;
    string name;

public:
Test(): id(0), name(""){
}
Test(int id, string name):
id(id), name(name){
}
void print() const{
    cout<<id<< ":"<<name<<endl;
}
bool operator<(const Test &other) const{
    return name < other.name;
}
};

int main(){
    set <int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(30);
    numbers.insert(20);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout<<*it<<endl;
    }
    set<int>::iterator itFind = numbers.find(30);

    if(itFind != numbers.end()){
        cout<<"found"<< *itFind << endl;
    }
    if (numbers.count(30)){
        cout<< "number found"<<endl;
    }

    set<Test> tests;
    tests.insert(Test(10,"mike"));
    tests.insert(Test(30,"joe"));
    tests.insert(Test(20,"Sue"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++){
        it->print();
    }
    return 0;


}