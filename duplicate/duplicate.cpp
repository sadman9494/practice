#include <iostream>
using namespace std;

void arrcheck( int arr[] ,int length)
{
    
    bool r = false;
  for (int i =0; i<length ;i++)
    {
           int x = arr[i];
     
  for (int j =0 ; j<length;j++)
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
    int arr[] = {9,2,3,4,5,6,7,0,9,10};
    int length = sizeof(arr) / sizeof(arr[0]);
    arrcheck(arr , length);

}