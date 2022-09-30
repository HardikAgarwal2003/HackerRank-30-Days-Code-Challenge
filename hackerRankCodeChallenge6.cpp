#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void s(string);
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n;
    cin >> n;
    string s0;
    for(int i = 0; i<n;i++)
    {
        cin >> s0;
        s(s0);
        cout << endl;
    }   
    return 0;
}
void s(string s)
{
    string s1,s2;
        for(int i = 0; i < s.length(); i++)
        {
            if(i%2==0)
            {
                s1+=s[i];
            }
            else {
                s2+=s[i];
            }   
        }
        cout << s1 << " " << s2;
}


