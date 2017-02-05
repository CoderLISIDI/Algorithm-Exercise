//
//  main.cpp
//  选择排序
//
//  Created by lisd on 2017/1/24.
//  Copyright © 2017年 lisd. All rights reserved.
//

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    
    for (int i=0; i<n; i++) {
        int minIndex = i;
        for (int j=i+1; j<n; j++) {
            if (arr[i]>arr[j]) {
                minIndex = j;
                swap(arr[i], arr[j]);
            }
        }
        cout<<arr[i]<<endl;
    }
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int arr[] = {3, 1, 5, 2, 4, 6, 7};
    
    selectionSort(arr, 7);
    
    return 0;
}

