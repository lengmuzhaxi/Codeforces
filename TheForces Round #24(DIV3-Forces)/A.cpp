#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;
int len(string s)
{
    size_t n = s.size();
    if (n <= 4)
    {
        return 5;
    }
    else if (n >= 5 && n <= 7)
    {
        return 10;
    }
    return 25;
}
int  alph(string& s)
{
    int a = 0;
    int c = 0;
    int b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            a++;
        }
        if (isupper(s[i]))
        {
            b++;
        }
        if (islower(s[i]))
        {
            c++;
        }
    }
    if (a == 0)
    {
        return 0;
    }
    if (b == s.size() || c == s.size())
    {
        return 10;
    }
    else if (b > 0 && c < 0)
    {
        return 20;
    }

}
int digit(string& s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            num++;
        }
    }
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 10;
    }
    else if (num > 1)
    {
        return 20;
    }
}
int symbol(string& s)
{
    int sym = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isalnum(s[i]))
        {
            sym++;
        }
    }
    if (sym == 0)
    {
        return 0;
    }
    else if (sym == 1)
    {
        return 10;
    }
    else if (sym > 1)
    {
        return 25;
    }
}
int r(string& s)
{
    if (alph(s) > 0 && digit(s) > 0)
    {
        if (symbol(s) > 0)
        {

            if (alph(s) == 20)
            {
                return 5;
            }
            return 3;
        }
        return 2;
    }
}
void level(string s)
{
    int a = len(s);
    int b = alph(s);
    int c = digit(s);
    int d = symbol(s);
    int e = r(s);
    int k = a + b + c + d + e;
    if (k >= 90)
    {
        cout << "VERY_SECURE";
    }
    else if (k >= 80)
    {
        cout << "SECURE";
    }
    else if (k >= 70)
    {
        cout << "VERY_STRONG";
    }
    else if (k >= 60)
    {
        cout << "STRONG";
    }
    else if (k >= 50)
    {
        cout << "AVERAGE";
    }
    else if (k >= 25)
    {
        cout << "WEAK";
    }
    else if (k >= 0)
    {
        cout << "VERY_WEAK";
    }
    return;
}
int main()
{
    string s;
    getline(cin, s);
    level(s);
}
