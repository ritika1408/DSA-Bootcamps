#include <iostream>

using namespace std;
int main()
{
    char s[100];
    cin.getline(s, 100);
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = (s[i] >= 'a' && s[i] <= 'z') ? (s[i] - 32) : s[i];
    }
    cout << s;
    return 0;
}