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

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include "debug.h"

void matrix_multi(int m[2][2], int n[2][2])
{
    int m00 = m[0][0] * n[0][0] + m[0][1] * n[0][1];
    int m01 = m[0][0] * n[0][1] + m[0][1] * n[1][1];
    int m10 = m[1][0] * n[0][0] + m[1][1] * n[1][0];
    int m11 = m[1][0] * n[0][1] + m[1][1] * n[1][1];
    m[0][0] = m00;
    m[0][1] = m01;
    m[1][0] = m10;
    m[1][1] = m11;
}

// 快速幂矩阵算法
void matrix_pow(int m[2][2], int n)
{
    int t[2][2];
    t[0][0] = m[0][0];
    t[0][1] = m[0][1];
    t[1][0] = m[1][0];
    t[1][1] = m[1][1];
    while (n != 0) {
        if(n & 1) {
            matrix_multi(m, t);
        }
        matrix_multi(t, t);
        n >>= 1;
    }
}

// 斐波那契数: 矩阵算法
// 时间复杂度为 O(log n)
int fibonacci_matrix(int n)
{
    DEBUG_TIME_BEGIN();

    int m[2][2] = {{1, 1}, {1, 0}};
    matrix_pow(m, n - 2);

    DEBUG_TIME_END("FibonacciByMatrix");
    return m[0][0];
}

#endif // MATRIX_HPP
