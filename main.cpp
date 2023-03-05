#include <iostream>
#include <cstring>
#include <ctype.h>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    char s[200];
    scanf("%s",s);
    stack<int> numar;
    int sum,a,b;
    long long unsigned int i;
    for(i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
            numar.push(s[i]-'0');
        else
        {
            a=numar.top();
            numar.pop();
            b=numar.top();
            numar.pop();
            if(s[i]=='+')
            {
                sum=a+b;
                numar.push(sum);
            }
            if(s[i]=='-')
            {
                sum=b-a;
                numar.push(sum);
            }
            if(s[i]=='*')
            {
                sum=a*b;
                numar.push(sum);
            }
            if(s[i]=='/')
            {
                sum=b/a;
                numar.push(sum);
            }
        }
    }
    cout<<numar.top();
}
