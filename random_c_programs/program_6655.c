
#include <stdio.h>


int func758(int var992) {
    if (var992 <= 0) return 1;
    return 50;
}

int func976(int var829) {
    if (var829 <= 0) return 1;
    return func976(var829 - 1);
}

int func471(int var690) {
    if (var690 <= 0) return 1;
    return 85;
}

int func728(int var800) {
    if (var800 <= 0) return 1;
    return 18;
}

int func203(int var582) {
    if (var582 <= 0) return 1;
    return func203(var582 - 1);
}


int main() {
    int var286 = 0;
    while (var286 < 7) {
        var286 += 3;
        var286++;
    }    int var198 = 0;
    while (var198 < 11) {
        var198 += 2;
        var198++;
    }

    int var986 = 42;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var85 = 71;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    return 0;
}
