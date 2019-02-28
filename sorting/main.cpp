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

#include "bubble.hpp"
#include "selection.hpp"
#include "insertion.hpp"
#include "quicksort.hpp"
#include "shellsort.hpp"

#define ARRAY_SIZE 10000

void makeArray(int array[], int size)
{
    for(int i = 0; i < size; ++i) {
        array[i] = rand() % size;
    }
    printArray(array, size, "Input");
}

void copyArray(int source[], int size, int target[])
{
    for(int i = 0; i < size; ++i) {
        target[i] = source[i];
    }
}

int main()
{
    int array[ARRAY_SIZE];
    makeArray(array, ARRAY_SIZE);

    int array1[ARRAY_SIZE];
    copyArray(array, ARRAY_SIZE, array1);
    sort_bubble(array1, ARRAY_SIZE);

    int array2[ARRAY_SIZE];
    copyArray(array, ARRAY_SIZE, array2);
    sort_selection(array2, ARRAY_SIZE);

    int array3[ARRAY_SIZE];
    copyArray(array, ARRAY_SIZE, array3);
    sort_insertion(array3, ARRAY_SIZE);

    int array4[ARRAY_SIZE];
    copyArray(array, ARRAY_SIZE, array4);
    sort_quick(array4, ARRAY_SIZE);

    int array5[ARRAY_SIZE];
    copyArray(array, ARRAY_SIZE, array5);
    sort_shell(array5, ARRAY_SIZE);




    for(int i = 0; i < ARRAY_SIZE; ++i) {
        if(array1[i] == array2[i] &&
           array1[i] == array3[i] &&
           array1[i] == array4[i] &&
           array1[i] == array5[i]) {
            continue;
        } else {
            printf("An error occurred.\n");
            return 1;
        }
    }
    printf("Successfully completed.\n");

    return 0;
}
