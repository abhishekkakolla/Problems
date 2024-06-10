#include <iostream>
#include <vector>
#include <algorithm>


long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    int n = numbers.size();

    long long largest1 = 0;
    int index_of_largest1 = 0;
    for (int i = 0; i < n; i ++)
    {
        if (numbers[i] > largest1)
        {
            largest1 = numbers[i];
            index_of_largest1 = i;
        }

    }
    if (n > 1)
    {
       long largest2 = 0;
        for (int i =0; i <n;i++)
        {
            if ((i != index_of_largest1) && (numbers[i] > largest2))
            {
                largest2 = numbers[i];
            }
        }
        long long result = largest1 * largest2;
        return result; 
    }
    else
    {
        return largest1;
    }
    

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
