#include <iostream>
using namespace std;

struct int_vector {
    int* data;
    int size;
    int capacity;

    int_vector() {
        size = 0;
        capacity = 4;
        data = new int[capacity];
    }

    void push_back(int value) {
        if (size == capacity) {
            reserve(capacity * 2);
        }

        data[size] = value;
        size++;
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    void clear() {
        size = 0;
    }

    bool is_empty() {
        return size == 0;
    }

    int& front() {
        return data[0];
    }

    int& back() {
        return data[size - 1];
    }

    void insert(int index, int value) {
        if (index < 0 || index > size) {
            return;
        }

        if (size == capacity) {
            reserve(capacity * 2);
        }

        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }

        data[index] = value;
        size++;
    }

    void erase(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    void shrink_to_fit() {
        if (capacity == size) {
            return;
        }

        int* new_data = new int[size];

        for (int i = 0; i < size; i++) {
            new_data[i] = data[i];
        }

        delete[] data;
        data = new_data;
        capacity = size;
    }

    void reserve(int n) {
        if (n <= capacity) {
            return;
        }

        int* new_data = new int[n];

        for (int i = 0; i < size; i++) {
            new_data[i] = data[i];
        }

        delete[] data;
        data = new_data;
        capacity = n;
    }

    int find(int value) {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return i;
            }
        }

        return -1;
    }

    int count(int value) {
        int c = 0;

        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                c++;
            }
        }

        return c;
    }

    void reverse() {
        for (int i = 0; i < size / 2; i++) {
            int temp = data[i];
            data[i] = data[size - 1 - i];
            data[size - 1 - i] = temp;
        }
    }

    void unique() {
        if (size == 0) {
            return;
        }

        int j = 0;

        for (int i = 1; i < size; i++) {
            if (data[i] != data[j]) {
                j++;
                data[j] = data[i];
            }
        }

        size = j + 1;
    }

    void sort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (data[j] > data[j + 1]) {
                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }

    void remove_all(int value) {
        int j = 0;

        for (int i = 0; i < size; i++) {
            if (data[i] != value) {
                data[j] = data[i];
                j++;
            }
        }

        size = j;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

struct char_vector {
    char* data;
    int size;
    int capacity;

    char_vector() {
        size = 0;
        capacity = 10;
        data = new char[capacity];
    }

    void print_string() {
        for (int i = 0; i < size; i++) {
            cout << data[i];
        }
        cout << endl;
    }
};

int find_max(int_vector& v) {
    if (v.size == 0) {
        return 0;
    }

    int max = v.data[0];

    for (int i = 1; i < v.size; i++) {
        if (v.data[i] > max) {
            max = v.data[i];
        }
    }

    return max;
}

void concat(int_vector& dst, int_vector& src) {
    for (int i = 0; i < src.size; i++) {
        dst.push_back(src.data[i]);
    }
}

bool equals(int_vector& a, int_vector& b) {
    if (a.size != b.size) {
        return false;
    }

    for (int i = 0; i < a.size; i++) {
        if (a.data[i] != b.data[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int_vector v;
    int x;

    cout << "Enter numbers. Enter 0 to stop: ";

    while (true) {
        cin >> x;

        if (x == 0) {
            break;
        }

        v.push_back(x);
    }

    cout << "Vector in reverse order: ";

    for (int i = v.size - 1; i >= 0; i--) {
        cout << v.data[i] << " ";
    }

    cout << endl;

    return 0;
}