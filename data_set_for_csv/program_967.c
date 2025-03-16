
#include <stdio.h>


int func83(int var948) {
    if (var948 <= 0) return 1;
    return func83(var948 - 1);
}

int func579(int var819) {
    if (var819 <= 0) return 1;
    return func579(var819 - 1);
}

int func805(int var845) {
    if (var845 <= 0) return 1;
    return 93;
}

int func597(int var239) {
    if (var239 <= 0) return 1;
    return 73;
}

int func505(int var781) {
    if (var781 <= 0) return 1;
    return func505(var781 - 1);
}


int main() {
    for (int var294 = 0; var294 < 13; var294++) {
        var294 += 3;
    }    for (int var508 = 0; var508 < 19; var508++) {
        var508 += 4;
    }    for (int var942 = 0; var942 < 10; var942++) {
        var942 += 1;
    }

    int var231 = 77;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    return 0;
}
