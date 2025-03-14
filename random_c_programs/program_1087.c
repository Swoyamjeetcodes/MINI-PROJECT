
#include <stdio.h>


int func403(int var706) {
    if (var706 <= 0) return 1;
    return func403(var706 - 1);
}

int func452(int var634) {
    if (var634 <= 0) return 1;
    return func452(var634 - 1);
}

int func647(int var633) {
    if (var633 <= 0) return 1;
    return 93;
}

int func751(int var978) {
    if (var978 <= 0) return 1;
    return func751(var978 - 1);
}


int main() {
    for (int var460 = 0; var460 < 19; var460++) {
        var460 += 4;
    }    int var426 = 0;
    while (var426 < 7) {
        var426 += 1;
        var426++;
    }    int var401 = 0;
    while (var401 < 20) {
        var401 += 5;
        var401++;
    }

    int var733 = 60;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var609 = 61;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    return 0;
}
