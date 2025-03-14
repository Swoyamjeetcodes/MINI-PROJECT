
#include <stdio.h>


int func252(int var262) {
    if (var262 <= 0) return 1;
    return 87;
}

int func357(int var849) {
    if (var849 <= 0) return 1;
    return 54;
}

int func486(int var241) {
    if (var241 <= 0) return 1;
    return func486(var241 - 1);
}

int func663(int var935) {
    if (var935 <= 0) return 1;
    return func663(var935 - 1);
}

int func393(int var734) {
    if (var734 <= 0) return 1;
    return 49;
}


int main() {
    for (int var306 = 0; var306 < 14; var306++) {
        var306 += 1;
    }    int var9 = 0;
    while (var9 < 10) {
        var9 += 3;
        var9++;
    }

    int var841 = 47;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    int var124 = 24;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    int var632 = 66;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    return 0;
}
