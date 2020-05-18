#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
   int size = s.length();
    string c;
    //std::strcpy(c,s);
      string r =s.substr(0,2);
    vector<int> t_c(12);
    for(int i=1;i<=11;i++)
    {
        if(i!=12)
        {
        t_c[i]= 12 + i;
        }
        if(i==12)
        {
            t_c[i] = 00;
        }
    }
    if(s[8]=='P')
    {
         int n=stoi(r);
         //cout<<n<<"\n";
      if(n!=12)
      {
      //r[0],r[1]=s[0],s[1];
     // int n=stoi(r);
      string r2= std::to_string(t_c[n]);
     // cout<<r2<<"\n";
          string r3 =r2.append(s.substr(2,6));
         // cout<<r2<<"\n";
          return r3;
      }
        if(n==12)
        {
            string s1=s.substr(0,8);
            //cout<<s1<<"\n";
            return s1;
        }
    }
    if(s[8]=='A' )
    {
        int n=stoi(r);
        if(n!=12)
      {
          string s2=s.substr(0,8);
          // cout<<s2<<"\n";
            return s2;
      }
        if(n==12)
        {
        string hh = "00";
        string nTime = hh.append(s.substr(2,6));
         //cout<<nTime<<"\n";
        return nTime;
            
        }
     // int n = ator   
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    fout.close();

    return 0;
}

