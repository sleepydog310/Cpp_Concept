/*****************************************************************
Name : 
Date : 2017/01/19
By   : CharlotteHonG
Final: 2017/01/19
*****************************************************************/
#include <iostream>
#include <vector>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
    // int len=7;
    // vector<int> v(len);

    // for (unsigned i = 0; i < v.size(); ++i){
    //  cout << v[i] << ",";
    // }

    int y=3, x=4;
    vector<vector<int>> arr(y);
    for (int i = 0; i < y; ++i){
        arr[0].resize(x);
    }
    
    return 0;
}
/*==============================================================*/