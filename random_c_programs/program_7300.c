
#include <stdio.h>


int func26(int var726) {
    if (var726 <= 0) return 1;
    return func26(var726 - 1);
}


int main() {
    for (int var701 = 0; var701 < 12; var701++) {
        var701 += 3;
    }

    int var628 = 30;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
