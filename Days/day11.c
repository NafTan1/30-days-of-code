/*
Problem Link: https://www.hackerrank.com/challenges/30-2d-arrays/problem
*/

#include <stdio.h>
#include <limits.h>

void calculation(int r, int c, int arr[r][c], int sr[], int x_row, int count) {
    int cnt = count;
    for (int i = 0; i <= c - 3; i++) {
        int sum = 0;
        for (int row = x_row; row < x_row + 3; row++) {
            for (int col = i; col < i + 3; col++) {
                if (row == x_row + 1 && (col == i || col == i + 2)) {
                    continue;
                } else {
                    sum += arr[row][col];
                }
            }
        }
        sr[cnt] = sum;
        cnt++;
    }
}

int main() {
    int r=6; int c=6;
    //scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int hr_size = (r - 2) * (c - 2);
    int sum_arr[hr_size];
    for (int i = 0; i < hr_size; i++) {
        sum_arr[i] = 0;
    }

    int count = 0;
    for (int i = 0; i < r - 2; i++) {
        calculation(r, c, arr, sum_arr, i, count);
        count += (c - 2);
    }

    int max = INT_MIN;
    for (int i = 0; i < hr_size; i++) {
        if (sum_arr[i] > max) {
            max = sum_arr[i];
        }
    }
    printf("%d\n", max);

    return 0;
}
