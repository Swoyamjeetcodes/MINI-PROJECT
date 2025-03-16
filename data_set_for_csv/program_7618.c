
#include <stdio.h>


int func726(int var882) {
    if (var882 <= 0) return 1;
    return 66;
}

int func471(int var350) {
    if (var350 <= 0) return 1;
    return 48;
}

int func474(int var634) {
    if (var634 <= 0) return 1;
    return func474(var634 - 1);
}


int main() {
    int var675 = 0;
    while (var675 < 5) {
        var675 += 2;
        var675++;
    }    int var789 = 0;
    while (var789 < 11) {
        var789 += 2;
        var789++;
    }    int var185 = 0;
    while (var185 < 12) {
        var185 += 1;
        var185++;
    }

    int var200 = 80;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
