
#include <stdio.h>


int func367(int var981) {
    if (var981 <= 0) return 1;
    return 3;
}

int func944(int var976) {
    if (var976 <= 0) return 1;
    return func944(var976 - 1);
}

int func541(int var753) {
    if (var753 <= 0) return 1;
    return func541(var753 - 1);
}

int func156(int var390) {
    if (var390 <= 0) return 1;
    return 63;
}

int func839(int var248) {
    if (var248 <= 0) return 1;
    return 2;
}

int func90(int var615) {
    if (var615 <= 0) return 1;
    return func90(var615 - 1);
}


int main() {
    int var763 = 0;
    while (var763 < 9) {
        var763 += 4;
        var763++;
    }

    int var116 = 52;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    return 0;
}
