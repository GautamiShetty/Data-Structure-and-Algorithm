#include<iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &array, int n)
{
    int totalSum = 0;
    totalSum = (n * (n + 1)) / 2;
    int sum = 0;
    cout << totalSum;
    for (int i = 0; i < n-1; i++)
    {
       sum = sum + array[i]; 
       
    }           
   
    return sum;
}

int main()
{
    vector<int>array = {1, 4, 2, 3, 6, 7};
    int ans = missingNumber(array,7);
    cout << endl << "Missing number is: "<<ans ; // Output
}