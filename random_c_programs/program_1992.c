
#include <stdio.h>


int func246(int var628) {
    if (var628 <= 0) return 1;
    return func246(var628 - 1);
}

int func91(int var452) {
    if (var452 <= 0) return 1;
    return func91(var452 - 1);
}

int func392(int var135) {
    if (var135 <= 0) return 1;
    return 74;
}

int func997(int var269) {
    if (var269 <= 0) return 1;
    return 66;
}


int main() {
    for (int var894 = 0; var894 < 16; var894++) {
        var894 += 4;
    }

    int var889 = 31;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    return 0;
}
