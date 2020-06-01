#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    map< string, vector<int> > scores;

    scores["mike"].push_back(10);
    scores["kim"].push_back(20);
    scores["mike"].push_back(30);

    for(map<string , vector<int> >::iterator it= scores.begin(); it != scores.end(); it++){
        string name = it->first;
        vector<int> scorelist = it->second;

        cout << name << endl;

        for(int i=0;i<scorelist.size();i++){
            cout<<scorelist[i]<<endl;
        }

    }
    return 0;
}

