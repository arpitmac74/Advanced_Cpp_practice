#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> texts ={"oshi", "two", "yolo"};

    for(auto text : texts){
        cout<<text<<endl;
    }

    vector<int> numbers={1,2,2,3};
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(342);

    for(auto n:numbers){
        cout<<n<<endl;
    }

    string hello = "hello";
    for(auto c: hello){
        cout<<c<<endl;
    }
    return 0;
}