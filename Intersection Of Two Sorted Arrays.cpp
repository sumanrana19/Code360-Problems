#include <iostream>
#include <vector>
us

    int
    main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Remove the element at index 2 (which is the number 3)
    int position = 2;
    numbers.erase(numbers.begin() + position);

    // Print the resulting vector
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

int main()
{
}