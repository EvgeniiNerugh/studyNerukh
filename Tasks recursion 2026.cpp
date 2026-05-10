#include <iostream>
#include <vector>
using namespace std;

// Task 1
double power(double x, int n) {
    if (n == 0) {
        return 1;
    }

    return x * power(x, n - 1);
}

// Task 2
int digit_sum(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + digit_sum(n / 10);
}

// Task 3
int digit_count(int n) {
    if (n < 10) {
        return 1;
    }

    return 1 + digit_count(n / 10);
}

// Task 4
void print_binary(int n) {
    if (n == 0) {
        return;
    }

    print_binary(n / 2);
    cout << n % 2;
}

// Task 5
template<typename T>
T recursive_max(vector<T>& v, int index) {
    if (index == v.size() - 1) {
        return v[index];
    }

    T maxValue = recursive_max(v, index + 1);

    if (v[index] > maxValue) {
        return v[index];
    }

    return maxValue;
}

// Task 6
template<typename T>
int recursive_count(vector<T>& v, T value, int index) {
    if (index == v.size()) {
        return 0;
    }

    if (v[index] == value) {
        return 1 + recursive_count(v, value, index + 1);
    }

    return recursive_count(v, value, index + 1);
}

// Task 7
template<typename T>
void recursive_reverse(vector<T>& v, int left, int right) {
    if (left >= right) {
        return;
    }

    T temp = v[left];
    v[left] = v[right];
    v[right] = temp;

    recursive_reverse(v, left + 1, right - 1);
}

// Task 8
template<typename T>
bool recursive_is_sorted(vector<T>& v, int index) {
    if (index >= v.size() - 1) {
        return true;
    }

    if (v[index] > v[index + 1]) {
        return false;
    }

    return recursive_is_sorted(v, index + 1);
}

// Task 9
bool is_palindrome(vector<char>& v, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (v[left] != v[right]) {
        return false;
    }

    return is_palindrome(v, left + 1, right - 1);
}

// Task 10
double fast_power(double x, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        double half = fast_power(x, n / 2);
        return half * half;
    }

    return x * fast_power(x, n - 1);
}

// Task 11
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

// Task 12
void hanoi(int n, char from, char to, char aux) {
    if (n == 0) {
        return;
    }

    hanoi(n - 1, from, aux, to);
    cout << "Move disk from " << from << " to " << to << endl;
    hanoi(n - 1, aux, to, from);
}

// Task 13
long long fib_memo(int n, vector<long long>& cache) {
    if (n <= 1) {
        return n;
    }

    if (cache[n] != -1) {
        return cache[n];
    }

    cache[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);

    return cache[n];
}

// Task 14
int count_paths(int m, int n) {
    if (m == 1 || n == 1) {
        return 1;
    }

    return count_paths(m - 1, n) + count_paths(m, n - 1);
}

// Task 15
int climb_stairs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return climb_stairs(n - 1) + climb_stairs(n - 2);
}

// Task 16
void print_current(vector<int>& current) {
    cout << "{";

    for (int i = 0; i < current.size(); i++) {
        cout << current[i];

        if (i != current.size() - 1) {
            cout << ",";
        }
    }

    cout << "}" << endl;
}

void subsets(vector<int>& v, vector<int>& current, int index) {
    if (index == v.size()) {
        print_current(current);
        return;
    }

    subsets(v, current, index + 1);

    current.push_back(v[index]);
    subsets(v, current, index + 1);

    current.pop_back();
}

// Task 17
template<typename T>
void recursive_selection_sort(vector<T>& v, int start) {
    if (start >= v.size() - 1) {
        return;
    }

    int minIndex = start;

    for (int i = start + 1; i < v.size(); i++) {
        if (v[i] < v[minIndex]) {
            minIndex = i;
        }
    }

    T temp = v[start];
    v[start] = v[minIndex];
    v[minIndex] = temp;

    recursive_selection_sort(v, start + 1);
}