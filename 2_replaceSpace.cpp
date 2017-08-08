#include <iostream>

using namespace std;

void replaceSpace(char *str, int lenght);

int main()
{
    char str[100] = "hello world";
    replaceSpace(str, 100);
    cout << str << endl;
    return 0;
}

void replaceSpace(char *str, int lenght)
{
    if (str == nullptr)
        return;
    int len = 0;
    int cnt = 0;
    char *p = str;
    while (*p != '\0')
    {
        len++;
        if (*p == ' ')
            cnt++;
        p++;
    }
    p++, len++;
    int end = cnt * 2 + len;
    while (end > len)
    {
        if (str[len] == ' ')
        {
            str[end--] = '0';
            str[end--] = '2';
            str[end--] = '%';
            len--;
        }
        else
            str[end--] = str[len--];
    }
}