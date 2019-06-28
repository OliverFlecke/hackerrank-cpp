#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    vector<int> vectors[n];

    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);

        for (int j = 0; j < k; j++)
        {
            int input;
            scanf("%d", &input);

            vectors[i].push_back(input);
        }
    }

    for (int k = 0; k < q; k++)
    {
        int i, j;
        scanf("%d %d", &i, &j);

        printf("%d\n", vectors[i][j]);
    }

    return 0;
}
