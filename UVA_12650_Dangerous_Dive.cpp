#include <bits/stdc++.h>

int main()
{
    int r, n, aux, i;
    int cubeta[10000];

    while (std::cin >> n >> r)
    {
        for (i = 1; i <= r; i++)
        {
            std::cin >> aux;
            cubeta[aux] = 1;
        }

        if (n == r)
        {
            std::cout << "*";
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                if (cubeta[i] == 0)
                    std::cout << i << " ";
            }
        }

        std::cout << std::endl;
        std::memset(cubeta, 0, sizeof(cubeta));
    }

    return 0;
}
