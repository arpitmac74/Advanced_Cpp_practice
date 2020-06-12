#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Count(vector<string> &texts, bool (*pointf)(string text)){
    int tail=0;
    for(int i=0;i<texts.size();i++){
        if(pointf(texts[i])){
            tail++;
        }
    }
    return tail;
}

bool match(string s){
    return s.size()==3;
}

int main(){
    vector<string> texts;

    texts.push_back("rt");
    texts.push_back("osh");
    texts.push_back("rsi");
    texts.push_back("reji");
    
    cout<<match("one")<<endl;

    cout<<count_if(texts.begin(),texts.end(),match)<<endl;

    cout<<Count(texts,match)<<endl;


    return 0;

}