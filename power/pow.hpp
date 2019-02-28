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

#ifndef POW_HPP
#define POW_HPP

#define DEBUG_TIME

#include "debug.h"

// 朴素幂
// 时间复杂度为 O(n)
int pow_normal(int x, int y)
{
    DEBUG_TIME_BEGIN();

    int pow = 1;
    for(int i = 0; i < y; ++i) {
        pow = pow * x;
    }

    DEBUG_TIME_END("NormalPower");

    return pow;
}

#endif // POW_HPP
