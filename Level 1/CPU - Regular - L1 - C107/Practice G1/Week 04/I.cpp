#include <iostream>

using namespace std;

int main()
{

    int n = 3;

    int grid[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int answerGrid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            answerGrid[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            while (grid[i][j]--)
            {
                answerGrid[i][j] = !answerGrid[i][j];

                if (i - 1 >= 0)
                {
                    answerGrid[i - 1][j] = !answerGrid[i - 1][j];
                }
                if (i + 1 < n)
                {
                    answerGrid[i + 1][j] = !answerGrid[i + 1][j];
                }

                if (j - 1 >= 0)
                {
                    answerGrid[i][j - 1] = !answerGrid[i][j - 1];
                }

                if (j + 1 < n)
                {
                    answerGrid[i][j + 1] = !answerGrid[i][j + 1];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << answerGrid[i][j];
        }
        cout << endl;
    }
    return 0;
}