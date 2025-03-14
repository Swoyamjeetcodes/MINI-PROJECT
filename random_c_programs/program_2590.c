
#include <stdio.h>


int func662(int var671) {
    if (var671 <= 0) return 1;
    return func662(var671 - 1);
}


int main() {
    int var383 = 0;
    while (var383 < 7) {
        var383 += 3;
        var383++;
    }    int var178 = 0;
    while (var178 < 5) {
        var178 += 3;
        var178++;
    }    int var322 = 0;
    while (var322 < 20) {
        var322 += 3;
        var322++;
    }

    int var705 = 78;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    int var965 = 81;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    return 0;
}
