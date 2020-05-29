#include <iostream>
#include <map>

using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    Person(): name(""), age(0){

    } 
    Person(const Person &other){
        cout<<"copy contrsuctor runnuing"<<endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age) :
        name(name), age(age){

        }
        void print() const{
            cout<<name<<":"<<age<<endl;
        }
    bool operator<(const Person &other) const{
        if(name==other.name){
            return age<other.age;
        }
        return name<other.name;
    }    
};

int main(){
    map<Person,int> people;

    people[Person("Mike",100)] = 10;
    people[Person("Mike",30)] = 20;
    people[Person("jade",20)] = 20;
    people[Person("post",30)] = 30;


    for(map<Person,int>::iterator it = people.begin(); it != people.end(); it++){
        cout<<it->second<<":"<< flush;
        it->first.print();
        cout<<endl;
    }
    return 0;
}