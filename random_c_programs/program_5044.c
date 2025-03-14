
#include <stdio.h>


int func112(int var246) {
    if (var246 <= 0) return 1;
    return func112(var246 - 1);
}

int func117(int var692) {
    if (var692 <= 0) return 1;
    return func117(var692 - 1);
}


int main() {
    for (int var79 = 0; var79 < 8; var79++) {
        var79 += 3;
    }    int var844 = 0;
    while (var844 < 9) {
        var844 += 2;
        var844++;
    }    int var920 = 0;
    while (var920 < 20) {
        var920 += 1;
        var920++;
    }

    int var338 = 47;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    int var863 = 69;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var913 = 20;
    if (var913 % 2 == 0) {
        printf("var913 is even\n");
    } else {
        printf("var913 is odd\n");
    }

    return 0;
}
