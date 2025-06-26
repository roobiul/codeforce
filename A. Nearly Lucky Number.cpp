#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num;
    int count = 0, i;
    cin >> num;
    for (i = 0; i < num.size(); i++)
    {
        if (num[i] == '7' || num[i] == '4')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}