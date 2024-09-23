#include <iostream>
using namespace std;

int GlobalVar = 10;

int main()
{

    int localToMain = 20;

    cout << "GlobalVar: " << GlobalVar << endl;
    cout << "localToMain: " << localToMain << endl;
    if (true)
    {
        int localToBlock = 30;
        cout << "GlobalVar: " << GlobalVar << endl;
        cout << "localToMain: " << localToMain << endl;
        cout << "localToBlock: " << localToBlock << endl;
    }

    cout << localToBlock << endl; // Error: localToBlock is not defined in this scope

    if (true)
    {
        int localToMain = 40;
        cout << "localToMain: " << localToMain << endl; // 40
    }

    cout << "localToMain: " << localToMain << endl; // 20
}