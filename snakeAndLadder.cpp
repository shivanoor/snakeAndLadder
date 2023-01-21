#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[3][3] = {{0, 1, -1}, {-1, 0, 1}, {1, -1, 0}};
    unordered_map<int, string> mp = {
        {0, "Snake"},
        {1, "Water"},
        {2, "Gun"}};
    int n = 5;
    while (n--)
    {
        int computerChoice = rand() % (2);
        int userChoice;
        cout << "Enter Your choice" << endl;
        cin >> userChoice;
        if (matrix[userChoice][computerChoice] == 1)
        {
            cout << "you Win" << endl;
            cout << "computer choice was " << mp[computerChoice] << " And your choice was " << mp[userChoice] << endl;
        }
        else if (matrix[userChoice][computerChoice] == -1)
        {
            cout << "You Lose " << endl;
            cout << "computer choice was " << mp[computerChoice] << " And your choice was " << mp[userChoice] << endl;
        }
        else
        {
            cout << "Its a Draw " << endl;
            cout << "computer choice was " << mp[computerChoice] << " And your choice was " << mp[userChoice] << endl;
        }
    }
    return 0;
}