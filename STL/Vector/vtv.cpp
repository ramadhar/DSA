#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<string>> mat;

int main(){
    mat.push_back({"apple", "orange", "banana"});
    mat.push_back({"car", "bus", "train"});
    mat.push_back({"sun", "moon", "stars"});

    // now sort the elements of this vector
    for(auto& mt:mat){
        sort(mt.begin(),mt.end());
    }

       for(const auto& mt:mat){
        for(const auto& e:mt){
            cout<<e<<" ";
        }
        cout<<endl;
    }

    return 0;
}