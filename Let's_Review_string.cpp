#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        string a,b,c;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
            {
                b+=a[i];

            }
            else{
                c+=a[i];
            }
        }
        cout<<b<<" "<<c<<"\n";
    }
    return 0;
}
