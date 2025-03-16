
#include <stdio.h>


int func465(int var632) {
    if (var632 <= 0) return 1;
    return func465(var632 - 1);
}

int func27(int var906) {
    if (var906 <= 0) return 1;
    return func27(var906 - 1);
}

int func375(int var939) {
    if (var939 <= 0) return 1;
    return func375(var939 - 1);
}

int func341(int var64) {
    if (var64 <= 0) return 1;
    return func341(var64 - 1);
}

int func980(int var112) {
    if (var112 <= 0) return 1;
    return 45;
}


int main() {
    for (int var357 = 0; var357 < 13; var357++) {
        var357 += 4;
    }    for (int var154 = 0; var154 < 6; var154++) {
        var154 += 4;
    }

    int var976 = 14;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    int var655 = 14;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    return 0;
}
