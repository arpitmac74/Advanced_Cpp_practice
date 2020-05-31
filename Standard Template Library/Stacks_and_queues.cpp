#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test{
    private:
    string name;

    public:
    Test(string name) : name(name)
    {
    }
    ~Test(){
        //cout<<"object destriyed"<<endl;
    }
    void print(){
        cout<<name<<endl;
    }
};

int main(){
    //LIFO
    stack<Test> teststack;

    teststack.push(Test("dinchy"));
    teststack.push(Test("sajin"));
    teststack.push(Test("oshi"));

    /*this is invalid code since we are referencing and then taking it off the stack, the code might run eventually
    *to prevent that we should directly put = and make a copy of it.
    Test &test1 = teststack.top();
    teststack.pop();
    test1.print();
    */
   while(teststack.size()>0){
       Test &test = teststack.top();
       test.print();
       teststack.pop();
   }

   cout<<endl<<endl;

   //FIFO
   queue<Test> testq;

    testq.push(Test("dinchy"));
    testq.push(Test("sajin"));
    testq.push(Test("oshi"));


   while(testq.size()>0){
       Test &test = testq.front();
       test.print();
       testq.pop();
   }

    return 0;



}