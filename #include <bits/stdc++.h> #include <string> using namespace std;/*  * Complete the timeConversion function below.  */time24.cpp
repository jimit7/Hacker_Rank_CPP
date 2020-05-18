#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
   int size = s.length();
    string c;
      string r =s.substr(0,2);
    vector<int> t_c(12);
    for(int i=1;i<=12;i++)
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
    if(s[size-2]=='P')
    {
      if(s[0]!='1'&& s[1]!='2')
      {
      //r[0],r[1]=s[0],s[1];
      int n=stoi(r);
      string r2= std::to_string(t_c[n]);
          string r3 =r2.append(s.substr(2,6));
          return r3;
      }
        if(s[0]=='1'&& s[1]=='2')
        {
            return s.substr(0,size-2);
        }
    }
    if(s[size-2]=='A' )
    {
        if(s[0]!='1'&& s[1]!='2')
      {
         return s.substr(0,size-2);
      }
        if(s[0]== '1'&& s[2]== '2')
        {
        string hh = "00";
        string nTime = hh.append(s.substr(2,6));
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

    fout << result << "\n";

    fout.close();

    return 0;
}

