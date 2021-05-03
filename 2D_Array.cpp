#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    vector<int> brr(16);
for(int a=0;a<4;a++)
{
    for(int b=0;b<4;b++)
    {
        int c=0;
c=arr[a][b]+arr[a][b+1]+arr[a][b+2]+arr[a+1][b+1]+arr[a+2][b]+arr[a+2][b+1]+arr[a+2][b+2];

brr.push_back (c);

    
     }
}
  cout  << *max_element(brr.begin(), brr.end());
    return 0;
    
}

