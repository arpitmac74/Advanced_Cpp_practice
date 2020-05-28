#include<iostream>
#include <map>

using namespace std;

int main()
{
map<string,int> ages;

ages["oshi"]= 21;
ages["kimia"]=22;
ages["zed"]=80;
ages.insert(pair<string,int>("peter",12));

if(ages.find("oshi")!= ages.end())
{
    cout<< "found oshi"<<endl;
}
else{
    cout<<"not found"<<endl;
}

for(map<string,int>::iterator it= ages.begin(); it != ages.end(); it++)
{
cout<<it->first<<" : "<<it->second<<endl;    
}
return 0;

}