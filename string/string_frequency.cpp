#include<iostream>
#include<string>

using namespace std;

int main(){
string str = "cdcskahxxxxugkjh";
int freq[26];
for (int i = 0; i < 26; i++)
{
    freq[i]=0;
}

for (int j = 0; j < str.length(); j++)
{
        freq[str[j]-'a']++;   
}
int maxF=0;
char ans = 'a';
for (int k = 0; k < 26; k++)
{
    if (freq[k]>maxF)
    {
        maxF=freq[k];
        ans = k + 'a';
    }
    
}
 cout<<maxF<<" "<<ans<<endl;
    return 0;
}