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

#ifndef FASTPOW_HPP
#define FASTPOW_HPP

#define DEBUG_TIME

#include "debug.h"

// 快速幂
// 时间复杂度为 O(log₂n)
int pow_fast(int x, int y)
{
    DEBUG_TIME_BEGIN();

    int pow = 1;
    while(y != 0) {
        if(y & 1) {
            pow *= x;
        }
        x *= x;
        y >>= 1;
    }

    DEBUG_TIME_END("FastPower");

    return pow;
}

#endif // FASTPOW_HPP
