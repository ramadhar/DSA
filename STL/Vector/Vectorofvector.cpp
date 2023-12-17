#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

vector<vector<string>> names;

int main(){

    string str;

    vector<string> stu;

    cout<<"enter 5 names: ";
    for(int i=0;i<5;i++){
        cin>>str;
        stu.push_back(str);
    }

    names.push_back(stu);

    cout<<"\nEntered names are: ";

    for(const auto& m:stu){
        for(const auto& e:m){
            cout<<e;
        }
        cout<<endl;
    }

}