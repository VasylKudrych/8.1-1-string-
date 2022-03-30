#include <iostream>
#include <string>
using namespace std;

bool Include(const string s);

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    if (Include(str))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

bool Include(const string s)
{
    int d;
    int k = 0;
    d = s.length();
    size_t found = s.find("!!!");
    if (found != string::npos) {
        return true;
    }
    else {
        return false;
    }
}
