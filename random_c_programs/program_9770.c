
#include <stdio.h>


int func840(int var483) {
    if (var483 <= 0) return 1;
    return 77;
}

int func68(int var487) {
    if (var487 <= 0) return 1;
    return 80;
}

int func108(int var991) {
    if (var991 <= 0) return 1;
    return func108(var991 - 1);
}

int func13(int var394) {
    if (var394 <= 0) return 1;
    return func13(var394 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 19) {
        var823 += 3;
        var823++;
    }

    int var650 = 77;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    int var491 = 18;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    int var68 = 50;
    if (var68 % 2 == 0) {
        printf("var68 is even\n");
    } else {
        printf("var68 is odd\n");
    }

    return 0;
}
