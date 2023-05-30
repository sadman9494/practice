#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1;
    int insert;
    //taking input as much as they want
    cout<< " after completing your input press ctrl + D then press Enter"<<endl;
    while (cin>>insert)
    {
        v1.push_back(insert);
    }
    // we can not use direct cout << v1 
    // to print we need to use the loop
    for (auto p :v1)
     cout<<p<<" ";
     cout<<endl;


}