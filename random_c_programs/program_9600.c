
#include <stdio.h>


int func334(int var650) {
    if (var650 <= 0) return 1;
    return func334(var650 - 1);
}


int main() {
    int var771 = 0;
    while (var771 < 6) {
        var771 += 2;
        var771++;
    }    int var441 = 0;
    while (var441 < 9) {
        var441 += 4;
        var441++;
    }

    int var397 = 30;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
