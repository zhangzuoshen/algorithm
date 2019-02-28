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

#ifndef SELECTION_HPP
#define SELECTION_HPP

#include "debug.h"

// 选择排序: 每次选择最小（大）值，放到序列的头（尾）部。
// 时间复杂度： O(n^2)
// 适用场合：当数据量不大，且对稳定性没有要求的时候
void sort_selection(int array[], int size)
{
    DEBUG_TIME_BEGIN();

    for(int i = 0; i < size - 1; ++i) {
        int m = i;
        for(int j = i + 1; j < size; ++j) {
            if(array[j] < array[m]) {
                m = j;
            }
        }
        if(m != i) {
            int tmp = array[m];
            array[m] = array[i];
            array[i] = tmp;
        }
    }

    DEBUG_TIME_END("Selection");
}

#endif // SELECTION_HPP
