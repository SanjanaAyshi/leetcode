#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_coin;
    cin>>num_coin;
    int w[num_coin];
    for(int i=0; i<num_coin; i++)
    {
        cin>>w[i];
    }
    int target;
    cin >> target;
    int  dinamic_arr[num_coin + 1][target + 1];
    dinamic_arr[0][0] = 0;
    for (int i = 1; i <= target; i++)
    {
        dinamic_arr[0][i] = INT_MAX - 1;
    }
    for (int i = 1; i <= num_coin; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if (w[i - 1] <= j)
            {
                dinamic_arr[i][j] = min(1 + dinamic_arr[i][j - w[i - 1]], dinamic_arr[i - 1][j]);
            }
            else
            {
                dinamic_arr[i][j] = dinamic_arr[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= num_coin; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            cout << dinamic_arr[i][j] << " ";
        }
        cout << endl;
    }
    if (dinamic_arr[num_coin][target] == INT_MAX-1)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        cout << dinamic_arr[num_coin][target] << endl;
    }

    return 0;
}
