#include "./Utility/utility.h"
#include "./Utility/graphic.h"

int main()
{
    int arrSize = 40;
    vector<int> arr(arrSize);

    for (int i = 0; i <= arrSize; i++)
    {
        if (i % 5 == 0)
        {
            arr[i] = UTIL::random(1, 20);
        }
    }

    int i = 0;
    while (i < arrSize)
    {
        arr[i + 1] = math::lerp(arr[i], arr[i + 5], 0.2);
        arr[i + 2] = math::lerp(arr[i], arr[i + 5], 0.4);
        arr[i + 3] = math::lerp(arr[i], arr[i + 5], 0.6);
        arr[i + 4] = math::lerp(arr[i], arr[i + 5], 0.8);

        i += 5;
    }

    graphic::terrain(arr);
    std::string dummy;
    std::getline(std::cin, dummy);
    return 0;
}