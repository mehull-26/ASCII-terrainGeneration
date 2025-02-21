#pragma once

#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

namespace graphic
{
    void printline(vector<int> coords, int arrSize)
    {
        std::sort(coords.begin(), coords.end());
        // cout << "coords: ";
        // UTIL::printArray(coords);

        int j = 0;
        for (int i = 0; i < coords.size(); ++i)
        {
            while (j <= coords[i])
            {
                cout << ((coords[i] == j) ? " # " : "   ");
                j++;
            }
        }

        cout << "\n";
    }

    void terrain(vector<int> &arr)
    {
        // Store values with their original indices
        std::vector<std::pair<int, int>> indexedArr;
        for (int i = 0; i < arr.size(); i++)
        {
            indexedArr.push_back({arr[i], i}); // {value, index}
        }

        // Sort based on values while keeping indices
        std::sort(indexedArr.begin(), indexedArr.end());

        cout << "\n\n\n\n";

        int i = indexedArr.size() - 1;

        vector<int> coords;

        while (i >= 0)
        {
            coords.push_back(indexedArr[i].second);
            i--;
            while (indexedArr[i].first == indexedArr[i + 1].first)
            {
                coords.push_back(indexedArr[i].second);
                i--;
            }

            printline(coords, indexedArr.size());
        }
    }

}
