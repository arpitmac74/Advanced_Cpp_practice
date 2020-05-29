#include <iostream>
#include <map>

using namespace std;

int main(){
    multimap<int,string> lookup;
    lookup.insert(make_pair(30,"oshi"));
    lookup.insert(make_pair(10,"rohan"));
    lookup.insert(make_pair(20,"reji"));
    lookup.insert(make_pair(30,"rohit"));
    

    for (multimap<int,string>::iterator it = lookup.begin();it != lookup.end();it++)
    {
        cout<<it->first<<":"<< it->second<<endl;
    }
    cout<<endl;

    for (multimap<int,string>::iterator its=lookup.find(20);its!= lookup.end();its++){
        cout<<its->first<<" ; "<<its->second<<endl;
    }
    cout<<endl;
    pair<multimap<int,string>::iterator,multimap<int,string>::iterator> itss = lookup.equal_range(10);
    
    
    for (multimap<int,string>::iterator iti = itss.first; iti != itss.second;iti++)
    {
        cout<<iti->first<<":"<< iti->second<<endl;
    }
    cout<<endl;
    return 0;
}