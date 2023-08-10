#include <iostream>
#include <vector>

std::vector<int> memo;

int fibonacci(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    std::cin >> n;

    memo.resize(n + 1, -1);
    memo[0] = memo[1] = 1;

    int result = fibonacci(n);
    std::cout << result << std::endl;

    return 0;
}
