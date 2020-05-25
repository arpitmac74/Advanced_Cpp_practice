#include <iostream>
#include <vector>

using namespace std;

int main()
{

vector<double> nums(10);

cout<<"initial size"<<nums.size()<<endl;

int capacity = nums.capacity();
cout<<"inital capactiy"<< capacity;

for(int i=0;i <1000;i++)
{
    if(nums.capacity()!= capacity)
    {
        capacity = nums.capacity();
        cout<<"new capacity"<<capacity<<endl;
    }
    nums.push_back(i);
}
nums.reserve(5000);
cout<<nums.capacity()<<endl;
return 0;

}