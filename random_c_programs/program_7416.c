
#include <stdio.h>


int func467(int var325) {
    if (var325 <= 0) return 1;
    return func467(var325 - 1);
}

int func103(int var701) {
    if (var701 <= 0) return 1;
    return func103(var701 - 1);
}

int func728(int var733) {
    if (var733 <= 0) return 1;
    return 44;
}


int main() {
    int var747 = 0;
    while (var747 < 10) {
        var747 += 1;
        var747++;
    }    int var588 = 0;
    while (var588 < 5) {
        var588 += 3;
        var588++;
    }    for (int var162 = 0; var162 < 6; var162++) {
        var162 += 4;
    }    int var200 = 0;
    while (var200 < 18) {
        var200 += 1;
        var200++;
    }

    int var442 = 32;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
