#include <stdio.h>
int main() {
    int a[] = {10,12,15};
    int n = 3;
    int total = 8;
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
