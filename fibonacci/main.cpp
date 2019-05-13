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

#include <iostream>

#define DEBUG_TIME
#include "recursion.hpp"
#include "loop.hpp"
#include "matrix.hpp"

using namespace std;

int main()
{
    int n = 33;
    cout << fibonacci_recursion(n) << endl;
    cout << fibonacci_loop(n) << endl;
    cout << fibonacci_matrix(n) << endl;
    return 0;
}
