
#include <stdio.h>


int func967(int var356) {
    if (var356 <= 0) return 1;
    return func967(var356 - 1);
}

int func750(int var459) {
    if (var459 <= 0) return 1;
    return 82;
}

int func994(int var950) {
    if (var950 <= 0) return 1;
    return func994(var950 - 1);
}

int func484(int var378) {
    if (var378 <= 0) return 1;
    return 30;
}

int func204(int var843) {
    if (var843 <= 0) return 1;
    return func204(var843 - 1);
}


int main() {
    for (int var30 = 0; var30 < 14; var30++) {
        var30 += 3;
    }

    int var92 = 64;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    return 0;
}
