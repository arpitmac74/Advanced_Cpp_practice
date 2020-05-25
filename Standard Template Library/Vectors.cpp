#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<string> strings;

strings.push_back("one");
strings.push_back("two");
strings.push_back("three");

//simple defining 
for(int i=0;i<strings.size();i++){
    cout<<strings[0]<<endl;
}
// using pointer 
for(vector<string>::iterator it=strings.begin(); it != strings.end(); it++)
{
    cout<<*it<<endl;
}
auto it = strings.begin();
it +=2;
cout<<*it<<endl;
}