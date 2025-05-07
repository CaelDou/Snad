#include "include/var.h"

        int arr[4][4] = {
		{ 10, 11, 12, 13},
		{ 20, 21, 22, 23 },
		{ 30, 31, 32, 33 },
		{ 40, 41, 42, 43 }
		} ;
     int a_y = sizeof(arr) / sizeof(arr[0]);
     int a_x = sizeof(arr[0]) / sizeof(arr[0][0]);
