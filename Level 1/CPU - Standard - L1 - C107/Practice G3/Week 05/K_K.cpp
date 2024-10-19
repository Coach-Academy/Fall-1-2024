#include <iostream>
using namespace std;
int main()
{
    int n, visited[26]{}; // 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        visited[c - 'a'] = true;
    }
    int counter = 0;

    for (int i = 0; i < 26; i++)
        counter += visited[i];

    cout << (counter == 26 ? "YES" : "NO") << endl;
}