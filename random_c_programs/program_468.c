
#include <stdio.h>


int func778(int var842) {
    if (var842 <= 0) return 1;
    return func778(var842 - 1);
}


int main() {
    for (int var916 = 0; var916 < 17; var916++) {
        var916 += 1;
    }

    int var524 = 61;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    return 0;
}
