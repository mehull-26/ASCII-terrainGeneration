#pragma once

#include <bits/stdc++.h>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

namespace TEST
{
    void Sorted(vector<int> &arr)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << RED << "UNSORTED\n"
                     << RESET;
                return;
            }
        }
        cout << GREEN << "SORTED\n"
             << RESET;
    }
};

