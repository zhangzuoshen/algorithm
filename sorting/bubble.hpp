/**
 ** This file is part of the algorithm project.
 ** Copyright 2019 张作深 <zhangzuoshen@hangsheng.com.cn>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef BUBBLE_HPP
#define BUBBLE_HPP

#include "debug.h"

// 冒泡排序： 每次比较相邻的两个元素
// 时间复杂度： O(n^2)
// 适用场合：数据量量不大，对稳定性有要求，且数据基本有序的情况下
void sort_bubble(int array[], int size)
{
    DEBUG_TIME_BEGIN();

    for(int i = 1; i < size; ++i) {
        bool done = true; // 冒泡无交互则认为排序完成
        for(int j = 0; j < size - i; ++j) {
            if(array[j + 1] < array[j]) {
                int tmp = array[j ];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                done = false;
            }
        }
        if(done) {
            break;
        }
    }

    DEBUG_TIME_END("Bubble");
}

#endif // BUBBLE_HPP
