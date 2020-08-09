// SHAKILKEYWORD - Keyword Finder

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
        if(s.size()==0)
        {
            t++;
            continue;
        }
        
        v.clear();
        for(i=0;i<s.size();i++)//....|$ *@.&\"!^,?
        {
            if(s[i]=='.'||s[i]=='|'||s[i]=='$'||s[i]=='*'||s[i]=='@'||s[i]=='&'||s[i]=='\\'||s[i]=='"'||s[i]=='!'||s[i]=='^'||s[i]==','||s[i]=='?')
            s[i]=' ';
        }
        
        pushwords(s);
        
        c=0;
        for(i=0;i<v.size();i++)
        {
            
            for(j=0;j<v[i].size();j++)
            {
                if(v[i][j]=='#')
                {
                    c++;
                    cout<<v[i]<<"\n";
                    break;
                }
            }
        }
        if(c==0)
        cout<<"No keywords.\n";
        // cout<<endl;
    }
	return 0;
}
