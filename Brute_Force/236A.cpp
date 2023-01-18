#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[101];
    int count=0,count1=0,len=0;
    gets(str);
    for(int k=0;str[k]!='\0';k++)
    {
        len++;
    }
    char temp;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[j]<str[i])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
 
    }
    for(int l=0;l<len;l++)
    {
        if(str[l]==str[l+1])
            count=1;
        else
        count1++;
    }
    if(count1%2!=0)
        cout<<"IGNORE HIM!"<<endl;
        else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;
}



// Another solution using STL

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    set < char > st;
    for(int i = 0; i < s.size() ; i++) {
      st.insert(s[i]);
    }
   if(st.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
   else cout << "IGNORE HIM!" << endl;
   return 0;
}
