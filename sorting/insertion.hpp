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

#ifndef INSERTION_HPP
#define INSERTION_HPP

#include "debug.h"

// 插入排序: 插入排序是在一个已经有序的小序列的基础上，一次插入一个元素。
// 时间复杂度： O(n^2)
// 适用场合：数据量不大，对算法的稳定性有要求，且数据局部或者整体有序的情况，小规模如10个数平均时间最快，可以在快排中调用
void sort_insertion(int array[], int size)
{
    DEBUG_TIME_BEGIN();

    int i, j, tmp;
    for(i = 1; i < size; ++i) {
        tmp = array[i];
        for(j = i - 1; j >= 0 && array[j] > tmp; --j) {
            array[j + 1] = array[j];
        }
        array[j + 1] = tmp;
    }

    DEBUG_TIME_END("Insertion");
}

#endif // INSERTION_HPP
