//
//  main.c
//  Bubble-Sort
//
//  Created by yogendra singh on 3/19/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

#include <stdio.h>
void bubble_sort(int A[], int N);
int main(int argc, const char * argv[]) {
    
    int n , A[100];
    printf(" enter number of values");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d",&A[i]);
    }
    
    bubble_sort(A, n);
    for (int j = 0; j<n; j++) {
        printf("%d " ,A[j]);
    }
        return 0;
}

void bubble_sort(int A[], int N){
    
    int round ,i ,temp;
    for (round=1; round<=N-1; round++) {
        for (i=0; i<=N-round-1; i++) {
            if (A[i]>A[i+1]) {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
}

