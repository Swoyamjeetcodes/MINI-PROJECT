
#include <stdio.h>


int func469(int var311) {
    if (var311 <= 0) return 1;
    return func469(var311 - 1);
}


int main() {
    for (int var666 = 0; var666 < 14; var666++) {
        var666 += 3;
    }

    int var991 = 22;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
