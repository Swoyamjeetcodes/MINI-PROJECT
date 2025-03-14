
#include <stdio.h>


int func536(int var943) {
    if (var943 <= 0) return 1;
    return func536(var943 - 1);
}


int main() {
    for (int var387 = 0; var387 < 19; var387++) {
        var387 += 4;
    }    int var126 = 0;
    while (var126 < 11) {
        var126 += 3;
        var126++;
    }

    int var959 = 42;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}
