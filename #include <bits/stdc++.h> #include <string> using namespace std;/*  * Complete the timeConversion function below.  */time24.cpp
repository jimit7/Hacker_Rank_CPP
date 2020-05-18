#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string c;
      string r(2);
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
    if(s[8]=='P')
    {
      if(s[0]!='1'&& s[1]!='2')
      {
      r[0],r[1]=s[0],s[1];
      long n=atol(r);
      r= std::to_string(t_c[n]);
      }
        if(s[0]=='1'&& s[1]=='2')
        {
             r[0],r[1]=s[0],s[1];
        }
    }
    if(s[8]=='A' )
    {
        if(s[0]!='1'&& s[1]!='2')
      {
          r[0],r[1]=s[0],s[1];
      }
        if(s[0]== '1'&& s[2]== '2')
        {
            r[0] =='0';
            r[1]=='0';
        }
     // int n = ator   
    }
    
    c[0] =r[0];
    c[1]=r[1];
    for(int i=2;t<8;i++)
    {
      c[i]=s[i];  
    }
    
return c;
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

