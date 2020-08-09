// WORDCNT - Word Counting

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void pushlength(string str)
{
    stringstream s(str);
    string word;
    
    int count = 0;
    while (s >> word)
    v.push_back(word.size());
}

int main()
{
    long long int i,j,k,l,c,t,n,mx,tmp;
    string s,wrd;
    cin>>t;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        v.clear();
        
        pushlength(s);
        
        mx=0;
        tmp=-1;
        for(i=0;i<v.size();i++)
        {
            if(v[i]==tmp)
            {
                c++;
            }
            else
            {
                c=1;
                tmp=v[i];
            }
            mx=max(mx,c);
        }
        
        
        cout<<mx<<endl;
    }
	return 0;
}
