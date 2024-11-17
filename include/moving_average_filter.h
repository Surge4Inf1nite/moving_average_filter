#ifndef MOVING_AVERAGE_FILTER_H
#define MOVING_AVERAGE_FILTER_H

#include <vector>

class MovingAverageFilter {
public:
    // 构造函数，传入
    MovingAverageFilter(int window_size);

    // 滤波函数，输入原始数据，返回滤波后的数据
    double filter(double input);

private:
    int window_size_;               // 滑动窗口大小
    std::vector<double> window_;    // 滑动窗口数据
    double sum_;                    // 当前窗口总和
    int index_;                     // 当前窗口索引
};

#endif // MOVING_AVERAGE_FILTER_H