
#include <stdio.h>


int func670(int var999) {
    if (var999 <= 0) return 1;
    return 33;
}

int func255(int var145) {
    if (var145 <= 0) return 1;
    return func255(var145 - 1);
}

int func213(int var383) {
    if (var383 <= 0) return 1;
    return func213(var383 - 1);
}


int main() {
    for (int var401 = 0; var401 < 13; var401++) {
        var401 += 1;
    }

    int var978 = 6;
    if (var978 % 2 == 0) {
        printf("var978 is even\n");
    } else {
        printf("var978 is odd\n");
    }

    return 0;
}
