#include "stdio.h"
#include "stdlib.h"
int findClosestNumber(int* nums, int n) {
    int closest = nums[0];			//suppose closest number is the first number of string
    for (int i = 0; i < n; i++) {		//checking on by one by comparing it by 1st number and if true then putting the value in closest var
        if (abs(nums[i]) < abs(closest)) {
            closest = nums[i];
        } else if ((abs(nums[i]) == abs(closest)) && (nums[i] > closest)) {
            closest = nums[i];
        }
    }
    return closest ;
}

int main() {
    // Test Case 1
    int nums1[] = {5};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = findClosestNumber(nums1, n1);
    printf("Test Case 1: The closest number to 0 is: %d\n", result1);

    // Test Case 2
    int nums2[] = {-3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = findClosestNumber(nums2, n2);
    printf("Test Case 2: The closest number to 0 is: %d\n", result2);

    // Test Case 3
    int nums3[] = {1, -1};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    int result3 = findClosestNumber(nums3, n3);
    printf("Test Case 3: The closest number to 0 is: %d\n", result3);

    // Test Case 4
    int nums4[] = {4, -4};
    int n4 = sizeof(nums4) / sizeof(nums4[0]);
    int result4 = findClosestNumber(nums4, n4);
    printf("Test Case 4: The closest number to 0 is: %d\n", result4);

    // Test Case 5
    int nums5[] = {-4, -2, 1, 4, 8};
    int n5 = sizeof(nums5) / sizeof(nums5[0]);
    int result5 = findClosestNumber(nums5, n5);
    printf("Test Case 5: The closest number to 0 is: %d\n", result5);

    // Test Case 6
    int nums6[] = {2, -1, 1};
    int n6 = sizeof(nums6) / sizeof(nums6[0]);
    int result6 = findClosestNumber(nums6, n6);
    printf("Test Case 6: The closest number to 0 is: %d\n", result6);

    // Test Case 7
    int nums7[] = {0, 2, -2};
    int n7 = sizeof(nums7) / sizeof(nums7[0]);
    int result7 = findClosestNumber(nums7, n7);
    printf("Test Case 7: The closest number to 0 is: %d\n", result7);

    // Test Case 8
    int nums8[] = {-7, -3, -1, -5};
    int n8 = sizeof(nums8) / sizeof(nums8[0]);
    int result8 = findClosestNumber(nums8, n8);
    printf("Test Case 8: The closest number to 0 is: %d\n", result8);

    // Test Case 9
    int nums9[] = {3, 2, 1, 0, -1, -2, -3};
    int n9 = sizeof(nums9) / sizeof(nums9[0]);
    int result9 = findClosestNumber(nums9, n9);
    printf("Test Case 9: The closest number to 0 is: %d\n", result9);

    // Test Case 10
    int nums10[] = {105, -105};
    int n10 = sizeof(nums10) / sizeof(nums10[0]);
    int result10 = findClosestNumber(nums10, n10);
    printf("Test Case 10: The closest number to 0 is: %d\n", result10);

    // Test Case 11
    int nums11[] = {100000, -99999};
    int n11 = sizeof(nums11) / sizeof(nums11[0]);
    int result11 = findClosestNumber(nums11, n11);
    printf("Test Case 11: The closest number to 0 is: %d\n", result11);

    // Test Case 12
    int nums12[] = {-5, -10, -3};
    int n12 = sizeof(nums12) / sizeof(nums12[0]);
    int result12 = findClosestNumber(nums12, n12);
    printf("Test Case 12: The closest number to 0 is: %d\n", result12);

    // Test Case 13
    int nums13[] = {100, 50, 25};
    int n13 = sizeof(nums13) / sizeof(nums13[0]);
    int result13 = findClosestNumber(nums13, n13);
    printf("Test Case 13: The closest number to 0 is: %d\n", result13);

    // Test Case 14
    int nums14[] = {-50, -100, -25};
    int n14 = sizeof(nums14) / sizeof(nums14[0]);
    int result14 = findClosestNumber(nums14, n14);
    printf("Test Case 14: The closest number to 0 is: %d\n", result14);

    // Test Case 15
    int nums15[] = {1, 2, 3, -3, -2, -1};
    int n15 = sizeof(nums15) / sizeof(nums15[0]);
    int result15 = findClosestNumber(nums15, n15);
    printf("Test Case 15: The closest number to 0 is: %d\n", result15);

    return 0;
}
