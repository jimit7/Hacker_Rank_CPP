#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,long> pbk;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        long b;
        cin>>a;
        cin>>b;
        pbk.insert({a,b});
    } 
    while(1)
    {
        string c;
        cin>>c;
        std::map<string,long>::iterator it;
        it = pbk.find(c);
  if (it != pbk.end())
    pbk.erase (it);

    
std::cout << "a => " << pbk.find(c)->first << '\n';
     }
    return 0;
}
