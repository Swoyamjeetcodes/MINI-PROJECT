
#include <stdio.h>


int func430(int var136) {
    if (var136 <= 0) return 1;
    return func430(var136 - 1);
}

int func598(int var659) {
    if (var659 <= 0) return 1;
    return func598(var659 - 1);
}

int func995(int var766) {
    if (var766 <= 0) return 1;
    return 33;
}


int main() {
    int var342 = 0;
    while (var342 < 11) {
        var342 += 5;
        var342++;
    }

    int var734 = 1;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var668 = 26;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    return 0;
}
