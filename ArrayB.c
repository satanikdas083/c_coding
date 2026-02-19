#include <stdio.h>
int main() {
    int a[] = {2,3,1,8};
    int n = 4;
    int total = 16;
    printf("Power Set:\n");
    for (int i = 0; i < total; i++) {
        printf("{ ");
        int temp = i;
        for (int j = 0; j < n; j++) {
            if (temp % 2 == 1) {
                printf("%d ", a[j]);
            }
            temp = temp / 2;
        }
        printf("}\n");
    }
    return 0;
}
