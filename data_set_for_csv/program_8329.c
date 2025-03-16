
#include <stdio.h>


int func756(int var398) {
    if (var398 <= 0) return 1;
    return func756(var398 - 1);
}

int func728(int var831) {
    if (var831 <= 0) return 1;
    return func728(var831 - 1);
}

int func180(int var154) {
    if (var154 <= 0) return 1;
    return func180(var154 - 1);
}


int main() {
    int var60 = 0;
    while (var60 < 16) {
        var60 += 1;
        var60++;
    }

    int var287 = 0;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    return 0;
}
