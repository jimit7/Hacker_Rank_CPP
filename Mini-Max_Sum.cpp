#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <algorithm>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    int m=INT_MAX,M=INT_MIN;
    int64_t sum=0;
    vector<int> ar_n,ar_p;
   int64_t mi,ma;
    for(int i=0 ;i<arr.size();i++)
    {
        sum+=arr[i];
        if(arr[i]>M)
        {
            M=arr[i];
        }
        if(arr[i]<m)
        {
            m=arr[i];
            if(m>=0)
            {
                ar_p.push_back(m);
              // std::cout<<"a"<<endl;
            }
            if(m<0)
            {
                ar_n.push_back(m);
               // std::cout<<"b"<<endl;
            }
            }
        }

    mi=sum-M;
    int64_t c;
    if(ar_p.empty()!=1 &&ar_n.empty()!=1)
    {
    int64_t m_i=*std::max_element(std::begin(ar_n),std::end(ar_n));
    int64_t m_a=*std::min_element(std::begin(ar_p),std::end(ar_p));
    int a,b;
    a=sum-m_a;
    b=sum-m_i;
    if(a>b)
    {
    c=a;
    }
    else if(b>a)
    {
      c=b;
    }
    else
    {
    c=a;
    }
    }
    else if(ar_p.empty()!=1&&ar_n.empty()==1)
    {
    int64_t m_a=*std::min_element(std::begin(ar_p),std::end(ar_p));
    c=sum-m_a;
    }
    else if(ar_p.empty()==1&&ar_n.empty()!=1)
    {
       int64_t m_i=*std::min_element(std::begin(ar_n),std::end(ar_n));
       c=sum-m_i;
    }
    else
    {
      c=sum-m;
    }
    cout<<mi<<" "<<c;
    return;
    }

int main()
    {
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
    }

    vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

