#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxConsecutiveOnes(int x) 
{ 
    // Initialize result 
    int count = 0; 

    // Count the number of iterations to 
    // reach x = 0. 
    while (x!=0) 
    { 
        // This operation reduces length 
        // of every sequence of 1s by one. 
        x = (x & (x << 1)); 

        count++; 
    } 

    return count; 
} 

int main()
{
    int n,j=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<< maxConsecutiveOnes(n);
   // vector<int> i;
    //while(n!=0)
   // {
    //    if(n%2==0)
    //    {n=n/2;
    //    i.push_back(0);}
    //    if(n%2!=0)
    //    {n=(n-1)/2;
    //    i.push_back(1);}
    //}
    //for(int x=0;x<i.size();x++)
    //{
     //   if(i[x]==1);
      //  {
       // j+=1;
       // }
   // }
//cout<< j<<endl; 
    return 0;
}
