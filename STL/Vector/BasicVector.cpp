#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    int num;

    cout<<"Enter any 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        cin>>num;
        v.push_back(num);
    }

    // access elements
    // 1. by range
    for (int element:v)
    {
        /* code   */
        cout<<element<<" ";
    }
    cout<<endl;

    // 2. using iterator
    cout<<"using iterator"<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // 3. by auto 
    cout<<"using auto"<<endl;
    for(auto el:v){
        cout<<el<<" ";
    }
    cout<<endl;
  
    
    return 0;
}