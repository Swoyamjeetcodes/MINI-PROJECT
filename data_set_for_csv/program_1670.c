
#include <stdio.h>


int func241(int var366) {
    if (var366 <= 0) return 1;
    return func241(var366 - 1);
}

int func480(int var897) {
    if (var897 <= 0) return 1;
    return func480(var897 - 1);
}

int func750(int var314) {
    if (var314 <= 0) return 1;
    return func750(var314 - 1);
}


int main() {
    int var712 = 0;
    while (var712 < 13) {
        var712 += 3;
        var712++;
    }

    int var991 = 92;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
