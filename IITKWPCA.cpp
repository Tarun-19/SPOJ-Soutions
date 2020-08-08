// IITKWPCA - Niceness of the string

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
using namespace std;
vector<string> v;

void pushwords(string str)
{
    stringstream s(str);
    string word;
    
    int count = 0;
    while (s >> word)
    v.push_back(word);
}

int main()
{
    long long int i,j,k,l,c,t,n;
    string s,wrd;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        v.clear();
        
        pushwords(s);
        sort(v.begin(),v.end());
        
        c=1;
        for(i=1;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
            c++;
        }
        n=v.size();
        c=min(n,c);
        cout<<c<<endl;
        
    }
	return 0;
}
