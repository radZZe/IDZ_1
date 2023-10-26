#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fillAlphabet(string name){
    vector <string> L;
    int sizeL;
    cout<<"Input size "+name<<endl;
    cin>>sizeL;
    if(sizeL>10000){
        cout<<"many symbol, please enter a number that is less than 10000"<<endl;
        exit(0);
    }
    for (int i = 0; i < sizeL; i++)
    {
        string str;
        cin>> str;
        if(str.length()<=100){
            L.push_back(str);
        }else{
            cout<<"many lenght"<<std::endl;
            exit(0);
        }
        

    }
    return L;
}

vector<string> merge(vector <string> L1,vector <string> L2){
    vector <string> merge;
    if (!L1.empty() && !L2.empty()) {
    for (auto item1:L1){
        for(auto item2:L2){
            merge.push_back(item1+item2);
        }
    }
    }else if (L1.empty()) {
        merge = L2;
    } else {
        merge = L1;
    }
    return merge;

 };
 int main(){
    
    vector <string> L1  = fillAlphabet("L1");
    vector <std::string> L2 = fillAlphabet("L2");
    vector<string> Merge = merge(L1,L2);
    
    cout<<"{";
    for (auto  item1 : L1) {
        cout << item1 <<", ";
    }
    cout<<"}"<<std::endl;



    cout<<"{";
    for (auto  item2 : L2) {
        cout << item2 <<", ";
    }
    cout<<"}"<<std::endl;



    cout<<"{";
    for (auto  item : Merge) {
        cout << item <<", ";
    }
    cout<<"}";
    
    return 0;
 }
 

