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
    map<std::string,int> pbk;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        std::string a;
        long b;
        cin>>a;
        cin>>b;
        pbk.insert({a,b});
    } 
    while(1)
    {
       std::string c;
        cin>>c;
        std::map<std::string,int>::iterator it;
       // it = pbk.find(c);
       // if (it != pbk.end())
        //pbk.erase (it);

    
std::cout << "a => " << pbk.find(c)->second << '\n';
     }
    return 0;
}
