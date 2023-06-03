#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    // initializing vector v1
    vector<int> v1;
    // taking raw input method: 1
   v1 = {1,2,3,4};
   //taking raw input method:2
   vector<int> v2{1,2,3,4};
   //taking raw input method: 3
   vector<int> v3(5,12);

   cout<< "v1 elements"<< endl;
   for (int& i : v1)
   {
    cout<< v1[i]<< endl;
   }

   cout<< "v2 elements"<< endl;
   for (int& i : v2)
   {
    cout<< v1[i]<< endl;
   }

   cout<< "v3 elements"<< endl;
   for (int& i : v3)
   {
    cout<< i << endl;
   }


}