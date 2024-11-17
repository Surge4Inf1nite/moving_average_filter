#include <iostream>
#include <vector>
#include <moving_average_filter.h>

int main(int argc, char const *argv[])
{
    // 示例输入数据
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    int window_size = 3;  // 滑动窗口大小
    MovingAverageFilter maf(window_size);

    // 对数据滤波开始
    std::vector<double> filtered_data;
    for (double value : data) {
        double filtered_value = maf.filter(value);
        filtered_data.push_back(filtered_value);
    }

    // 输出滤波后的数据
    std::cout << "Moving Average Filtered Data: ";
    for (double value : filtered_data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}
