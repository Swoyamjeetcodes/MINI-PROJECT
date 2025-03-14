
#include <stdio.h>


int func889(int var141) {
    if (var141 <= 0) return 1;
    return func889(var141 - 1);
}


int main() {
    for (int var641 = 0; var641 < 11; var641++) {
        var641 += 4;
    }

    int var311 = 16;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    return 0;
}
