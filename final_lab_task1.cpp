#include <iostream>
#include <string>
using namespace std;

bool RE1aStar(string s)
{
    for (char c : s)
    {
        if (c != 'a')
        {
            return false;
        }
    }
    return true;
}

bool RE2aPlusOrBPlus(string s)
{
    if (s.empty())
    {
        return false;
    }

    char first = s[0];
    if (first != 'a' && first != 'b')
    {
        return false;
    }

    for (char c : s)
    {
        if (c != first)
        {
            return false;
        }

    }
    return true;
}

bool RE3aPlusOrBStar(string s)
{
    for (char c : s)
    {
        if (c != 'a' && c != 'b')
        {
            return false;
        }

    }
    return true;
}

bool RE4(string s)
{
    if (s.size() < 2)
    {
        return false;
    }
    if (s.front() != 'a')
    {
        return false;
    }

    if (s.back()  != 'b')
    {
        return false;
    }

    for (size_t i = 1; i < s.size() - 1; i++)
    {
        if (s[i] != 'a' && s[i] != 'b')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int choice;
    string input;

    while (true)
    {
        cout<<"select a regular expression"<<endl;
        cout<<" 1. RE1: a* "<<endl;
        cout<<" 2. RE2: a+b "<<endl;
        cout<<" 3. RE3: (a+b)* "<<endl;
        cout<<" 4. RE4: a(a+b)*b"<<endl;
        cout<<" 0. Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>choice;

        cout<< "Enter string : ";
        cin>>input;

        if (choice == 1)
        {
            if (RE1aStar(input))
            {
                cout<<"ACCEPTED"<<endl;
            }
            else
            {
                cout<<"REJECTED"<<endl;
            }
        }
        else if (choice == 2)
        {
            if (RE2aPlusOrBPlus(input))
            {
                cout<< "ACCEPTED" <<endl;
            }
            else
            {
                cout<< "REJECTED" <<endl;
            }
        }
        else if (choice == 3)
        {
            if (RE3aPlusOrBStar(input))
            {
                cout<< "ACCEPTED" <<endl;
            }
            else
            {
                cout<< "REJECTED" <<endl;
            }
        }
        else if (choice == 4)
        {
            if (RE4(input))
            {
                cout<< "ACCEPTED" <<endl;
            }
            else
            {
                cout<< "REJECTED" <<endl;
            }
        }
    }

    return 0;
}
