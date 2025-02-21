#pragma once

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

namespace UTIL
{
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void printArray(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int random(int bottomLimit, int upperLimit)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(bottomLimit, upperLimit);
        int random_number = dis(gen);
        return random_number;
    }

    vector<int> randomArray(int arraySize, int smallestNumber = 0, int largestNumber = 9999)
    {
        vector<int> arr(arraySize);
        for (int i = 0; i < arraySize; i++)
        {
            arr[i] = random(smallestNumber, largestNumber);
        }
        return arr;
    }

    vector<int> reverse(vector<int> array)
    {
        std::cout << MAGENTA
                  << "\nFunction Signature: vector<int> reverse(vector<int> array)\n"
                  << "\t\t// Implementation details hidden\n"
                  << RESET;

        std::cout << YELLOW
                  << "\nWARNING: This function creates a copy of the original array, which is not memory efficient.\n"
                  << RESET;

        vector<int> temp(array.size());
        for (int i = 0; i < array.size(); i++)
        {
            temp[i] = array[array.size() - 1 - i];
        }

        return temp;
    }

    int max(int number1, int number2)
    {
        return (number1 > number2) ? number1 : number2;
    }

    vector<int> inputArray()
    {
        vector<int> temp;

        std::string input;
        while (true)
        {
            cin >> input;
            if (input == "B")
            {
                break; // Stop taking input when 'B' is entered
            }

            std::stringstream ss(input);
            int num;

            if (ss >> num)
            {
                temp.push_back(num);
            }
            else
            {
                std::cout << "Invalid input. Please enter an integer or 'B' to stop.\n";
            }
        }

        return temp;
    }
};

namespace math
{
    double lerp(double start, double end, double t)
    {
        return start * (1 - t) + end * t;
    }
}
