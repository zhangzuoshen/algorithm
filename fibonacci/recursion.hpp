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

#ifndef RECURSION_HPP
#define RECURSION_HPP

#include "debug.h"

int fibo_recursion(int n)
{
    if(n == 1 || n == 2) {
        return 1;
    }
    return fibo_recursion(n - 1) + fibo_recursion(n - 2);
}

// 斐波那契数: 递归算法
// 时间复杂度为 O(2^n)
int fibonacci_recursion(int n)
{
    DEBUG_TIME_BEGIN();

    n = fibo_recursion(n);

    DEBUG_TIME_END("FibonacciByRecursion");
    return n;
}

#endif // RECURSION_HPP
