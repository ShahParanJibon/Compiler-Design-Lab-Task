#include <bits/stdc++.h>
using namespace std;

int main()
{

    ifstream file("myfile.txt");
    string line;

    int lineNumber = 1;
    while(getline(file,line))
    {
        if(line.empty())
        {
            lineNumber++;
            continue;
        }
    cout<<"in line : "<<lineNumber<<endl;
    stringstream ss(line);
    string word;

    while(ss>>word)
    {
        if(word == "int" || word == "float" || word == "double" || word == "string" || word == "main" || word == "if" || word == "else" || word == "return" || word == "cout")
        {
            cout<<word<<"-> keyword"<<endl;
        }
        else if(word == "=" || word == "+" || word == "-" || word == "*" || word == "/" || word == ">" || word == "<")
        {
            cout<<word<<"-> Operator"<<endl;
        }
        else if(word == ";" || word == "," || word == "\"" || word == "(" || word == ")" || word == "{" || word == "}")
        {
            cout<<word<<"-> Punctuation"<<endl;
        }
        else if(isdigit(word[0]))
        {
            cout<<word<<"-> Constant"<<endl;
        }
        else if(word.front() == '"' && word.back() == '"')
        {
            cout<<word<<"-> Constant"<<endl;
        }
        else
        {
            cout<<word<<"-> Identifier"<<endl;
        }

    }
    cout << endl;
    lineNumber++;
    }
    file.close();
    return 0;


}
