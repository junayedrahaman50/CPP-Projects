#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec; // Create an empty vector

    // Add elements to vector
    for (int i = 0; i < 5; i++)
    {
        int num;
        std::cout << "Enter values: ";
        std::cin >> num;
        vec.push_back(num);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << i << "th"
                  << " element in vector: " << vec[i] << '\n';
    }

    return 0;
}