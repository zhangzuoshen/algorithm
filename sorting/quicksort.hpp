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

#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include "debug.h"

void quicksort(int array[], int begin, int end)
{
    if(begin >= end) {
        return;
    }

    int i = begin;
    int j = end;
    int key = array[begin];
    while(i < j) {
        while(i < j && key <= array[j]) {
            j--;
        }
        array[i] = array[j];
        while(i < j && key >= array[i]) {
            i++;
        }
        array[j] = array[i];
    }
    array[i] = key;
    quicksort(array, begin, i - 1);
    quicksort(array, j + 1, end);
}

// 快速排序： 通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。
// 时间复杂度： O(n log n)
// 适用场合：数值范围较大，相同值的概率较小，数据量大且不考虑稳定性的情况，数值远大于数据量时威力更大
void sort_quick(int array[], int size)
{
    DEBUG_TIME_BEGIN();

    quicksort(array, 0, size - 1);

    DEBUG_TIME_END("QuickSort");
}

#endif // QUICKSORT_HPP
