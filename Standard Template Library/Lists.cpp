#include<iostream>
#include<list>

using namespace std;

int main(){

list<int> numbers;

numbers.push_back(1);
numbers.push_back(2);
numbers.push_back(3);
numbers.push_front(0);
list<int>::iterator rit= numbers.begin();
rit++;
numbers.insert(rit,100);

list<int>::iterator eraseit = numbers.begin();
eraseit++;
numbers.erase(eraseit);

for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++)
{
    if (*it ==3)
    {
        numbers.insert(it,1234);
    }
    if(*it==1){
        it=numbers.erase(it);
    }

   // cout<<*it<<endl;
}
for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++)
{
    cout<<*it<<endl;
}
}