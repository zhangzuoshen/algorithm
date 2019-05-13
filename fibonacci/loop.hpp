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

#ifndef LOOP_HPP
#define LOOP_HPP

#include "debug.h"

// 斐波那契数: 循环算法
// 时间复杂度为 O(n)
int fibonacci_loop(int n)
{
    DEBUG_TIME_BEGIN();

    int fibo = 1;
    int fibo1 = 1;
    int fibo2 = 0;
    for(int i = 1; i < n; ++i) {
        fibo = fibo1 + fibo2;
        fibo2 = fibo1;
        fibo1 = fibo;
    }

    DEBUG_TIME_END("FibonacciByLoop");
    return fibo;
}

#endif // LOOP_HPP
