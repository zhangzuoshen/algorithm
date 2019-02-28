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

#ifndef SHELLSORT_HPP
#define SHELLSORT_HPP

#include "debug.h"

// 希尔排序： 通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。
// 时间复杂度： O(n log^2 n)
// 适用场合：数据量较大，不要求稳定性
void sort_shell(int array[], int size)
{
    DEBUG_TIME_BEGIN();

    int n, i, j, tmp;
    int gap = size / 2;
    while( gap >= 1) {
        for(n = 0; n < gap; ++n) {
            for(i = n + gap; i < size; i += gap) {
                // 插入排序
                tmp = array[i];
                for(j = i - gap; j >= 0 && array[j] > tmp; j -= gap) {
                    array[j + gap] = array[j];
                }
                array[j + gap] = tmp;
            }
        }
        gap = gap / 2;
    }

    DEBUG_TIME_END("ShellSort");
}

#endif // SHELLSORT_HPP
