#include <iostream>

#include <vector>

#include <algorithm>

int findMinutes(const std::vector<int>& booked)
{
    int num3 = booked[0];
    int num2 = booked[1];
    int num1 = booked[0] + booked[2];
    int num0 = 0;
    for(size_t i = 3; i < booked.size(); i++)
    {
        if(num2 > num3)
            num0 = booked[i] + num2;

        else
            num0 = booked[i] + num3;

        std::swap(num2, num3);
        std::swap(num1, num2);
        std::swap(num0, num1);
    }

    return std::max(num1, num2);
}

int main()
{
    std::vector<int> booked = {30, 15, 60, 75, 45, 15, 15, 45};
    auto res = findMinutes(booked);
    std::cout << "res = " << res << '\n';

    return 0;
}
