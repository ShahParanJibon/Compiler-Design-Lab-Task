#include <iostream>
#include <string>
using namespace std;

bool RE(string s)
{
    int n=s.size();

    if(n<3)
    {
        return false;
    }

    if(s[0] !='a')
    {
        return false;
    }
    if(s[n-1] != 'a')
    {
        return false;
    }

    int bPos =-1;
    for(int i=n-2; i>=1; i--)
    {
        if(s[i] == 'b')
        {
            bPos=i;
            break;
        }
    }

    if(bPos == -1)
    {
        return false;
    }
    for(int i=1; i<bPos; i++)
    {
        if(s[i] != s[1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    cout<<"Enter string :";
    cin>>input;

    if(RE(input))
    {
        cout<<"ACCEPTED" <<endl;
    }
    else
    {
        cout<<"REJECTED" <<endl;
    }

    return 0;
}
