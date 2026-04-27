#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int processArray(std::vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    int write_idx = 0;
    int n = arr.size();
    int read_idx = 0;

    while (read_idx < n) {
        int current_val = arr[read_idx];

        if (current_val % 2 != 0 || (read_idx + 1 < n && arr[read_idx + 1] % 2 != 0) || read_idx == n - 1) {
            arr[write_idx++] = current_val;
            read_idx++;
        } else {
            int sequence_start = read_idx;
            int sequence_min = INT_MAX;
            int sequence_count = 0;

            while (read_idx < n && arr[read_idx] % 2 == 0) {
                sequence_min = std::min(sequence_min, arr[read_idx]);
                sequence_count++;
                read_idx++;
            }

            if (sequence_count >= 2) {
                arr[write_idx++] = sequence_min;
            } else {
                if (sequence_count == 1) {
                    arr[write_idx++] = arr[sequence_start];
                }
            }
        }
    }

    return write_idx;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> numbers;
    int num;

    while (std::cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    int new_length = processArray(numbers);

    for (int i = 0; i < new_length; ++i) {
        std::cout << numbers[i] << '\n';
    }

    return 0;
}
