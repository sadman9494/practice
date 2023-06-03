#include <iostream>
#include <vector>
using namespace std;

void arrcheck( vector<int>& arr)
{
    
    bool r = false;
  for (int i =0; i<arr.size() ;i++)
    {
           int x = arr[i];
     
  for (int j =0 ; j<arr.size();j++)
  {
    if ((x == arr[j])&& (j!=i))
        { r = true;}
  } 
    }  
    if (r == true)
    {
        cout << "True";
    }
    else 
    cout << "false";
}

int main()
{
    //vector<int> arr = {1,2,3,4,5,6,7,0,9,10};
    vector<int> arr;
    int a;
    while (cin>>a)
    {
        arr.push_back(a);
    }
    arrcheck(arr);

}