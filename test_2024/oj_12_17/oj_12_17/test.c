#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//// 二分查找函数
//int binarySearch(int arr[], int low, int high, int key) {
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//
//        if (arr[mid] == key)
//            return mid;
//        else if (arr[mid] < key)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    return -1;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int books[1000];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &books[i]);
//    }
//
//    int m;
//    scanf("%d", &m);
//
//    int target;
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &target);
//        int result = binarySearch(books, 0, n - 1, target);
//        if (result != -1) {
//            printf("Book borrowing successful\n");
//        }
//        else {
//            printf("Book borrowing failed\n");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//// 二分查找函数
//int binarySearch(int arr[], int low, int high, int key) {
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//
//        if (arr[mid] == key)
//            return mid;
//        else if (arr[mid] < key)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    return -1;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int books[1000];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &books[i]);
//    }
//
//    int m;
//    scanf("%d", &m);
//
//    int target;
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &target);
//        int result = binarySearch(books, 0, n - 1, target);
//        if (result != -1) {
//            printf("Book borrowing successful\n");
//        }
//        else {
//            printf("Book borrowing failed\n");
//        }
//    }
//
//    return 0;
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    while ((getchar()) != '\n'); // 清空输入缓冲区
//
//    int books[1000];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &books[i]);
//    }
//    while ((getchar()) != '\n'); // 清空输入缓冲区
//
//    int m;
//    scanf("%d", &m);
//    while ((getchar()) != '\n'); // 清空输入缓冲区
//
//    int target;
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &target);
//        while ((getchar()) != '\n'); // 清空输入缓冲区
//        int result = binarySearch(books, 0, n - 1, target);
//        if (result != -1) {
//            printf("Book borrowing successful\n");
//        }
//        else {
//            printf("Book borrowing failed\n");
//        }
//    }
//
//    return 0;
#include <stdio.h>
int main() {
    int a = 5;
    int b = 3;
    a ^= b;
  

    return 0;
}



