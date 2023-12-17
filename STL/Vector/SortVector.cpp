#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    int num;

    for(int i=0;i<5;i++){
        cin>>num;
        v.push_back(num);
    }

    cout<<"Entered numbers are: ";
    for(auto e:v){
        cout<<e<<" ";
    }
    cout<<endl;

    // now sort the vector elements
    sort(v.begin(),v.end());

    cout<<"Sorted vector: ";
    for(auto e:v){
        cout<<e<<" ";
    }
    cout<<endl;

    return 0;

}