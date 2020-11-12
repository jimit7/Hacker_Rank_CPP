// Example program
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
    map<std::string,long int> pbk;
    long int n;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        std::string a;
        long int b;
        cin>>a;
        cin>>b;
        pbk.insert({a,b});
    } 
    
    
       std::string c;
        while(cin>>c){
        std::map<std::string,long int>::iterator it;
       it = pbk.find(c);
       if (it == pbk.end())
       {
           cout<<"Not found"<<endl;
           
       continue;
}
    
std::cout << pbk.find(c)->first<< "=" << pbk.find(c)->second << '\n';
    
     }
    return 0;
}
