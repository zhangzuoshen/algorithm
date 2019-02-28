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

#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG_TIME

#include <ctime>

#define DEBUG_TIME_BEGIN() \
    time_t c_start, c_end; \
    c_start = clock(); \

#define DEBUG_TIME_END(name) \
    c_end = clock(); \
    printf("The current algorithm takes %3d ms.(%s)\n", (int)difftime(c_end, c_start), #name); \

#else

#define DEBUG_TIME_BEGIN()
#define DEBUG_TIME_END(name)

#endif

#endif // DEBUG_H
