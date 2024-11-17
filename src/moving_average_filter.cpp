#include "moving_average_filter.h"

// 构造函数初始化滤波器系数和初始值
MovingAverageFilter::MovingAverageFilter(int window_size)
    : window_size_(window_size), window_(window_size, 0.0), sum_(0.0), index_(0) {}

double MovingAverageFilter::filter(double input) {
    // 从总和中减去需要移除的元素值
    sum_ -= window_[index_];
    // 更新窗口中的当前值
    window_[index_] = input;
    // 将新输入的值加入到总和中
    sum_ += input;
    // 更新索引
    index_ = (index_ + 1) % window_size_;
    // 返回平均值
    return sum_/window_size_;
}