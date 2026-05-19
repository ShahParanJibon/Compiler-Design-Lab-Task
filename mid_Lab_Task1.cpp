#include <iostream>
using namespace std;

void numaric()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
      if (s[i]>=48 && s[i]<=57)
      {
          count++;

      }
      else
      {
          break;
      }
    }
    if(count==s.length())
    {
        cout<<"numaric";
    }
    else
    {
        cout<<"not numaric";
    }
    cout<<endl;
}
void arithmetic()
{
    string s;
    cin>>s;
    int count =1;
    for(int i=0; i<sizeof(s); i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='%' || s[i]=='=')

          {

           cout<<"operator "<<count<<" = "<<s[i]<<endl;
            count++;
          }
    }
}

void checkcomment()
{
    string s;
    getline(cin,s);
    if(s[0]=='/' && s[1]=='/')
    {
        cout<<"Single line comment";
    }
    else if(s[0]=='/' && s[1]=='*'&&s[sizeof(s)-1 == '/'] && s[sizeof(s)-2]=='*')

    {
      cout<<"multiple line Comment ";
    }
    else{
        cout<<"NO comment";
    }

}
void indentifier()
{
    string s;
    cin>>s;
    if(!((s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z') || (s[0]=='_')))

    {
        cout<<"Not Identifier";
        return;
    }
     for (int i=1; i<s.length(); i++)
    {
        if (!((s[1]>='A' && s[1]<='Z') || (s[1]>='a' && s[1]<='z') || (s[1]=='_') || (s[1]>='0' && s[1]<='9')))
        {
            cout<<"Not Identifier";
            return;
        }
    }
    cout<<"Identifier";


}
int main()
{
    numaric();
    arithmetic();
    checkcomment();
    indentifier();
    return 0;
}
