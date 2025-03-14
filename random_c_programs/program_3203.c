
#include <stdio.h>


int func367(int var963) {
    if (var963 <= 0) return 1;
    return func367(var963 - 1);
}

int func224(int var162) {
    if (var162 <= 0) return 1;
    return func224(var162 - 1);
}

int func205(int var509) {
    if (var509 <= 0) return 1;
    return func205(var509 - 1);
}


int main() {
    int var686 = 0;
    while (var686 < 17) {
        var686 += 3;
        var686++;
    }    int var733 = 0;
    while (var733 < 11) {
        var733 += 4;
        var733++;
    }    for (int var688 = 0; var688 < 17; var688++) {
        var688 += 2;
    }

    int var185 = 53;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    int var440 = 59;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}
