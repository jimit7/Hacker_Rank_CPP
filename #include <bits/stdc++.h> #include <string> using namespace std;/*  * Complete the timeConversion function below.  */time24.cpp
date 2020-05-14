#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string c;
    if(s[7]=='A')
    {
        string r;
      r[0],r[1]=s[0],s[1];
      int n=ator(r)+12;
      r= std::to_string(n);
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

