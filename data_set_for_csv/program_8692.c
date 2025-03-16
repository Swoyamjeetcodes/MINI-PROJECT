
#include <stdio.h>


int func536(int var899) {
    if (var899 <= 0) return 1;
    return func536(var899 - 1);
}

int func39(int var453) {
    if (var453 <= 0) return 1;
    return func39(var453 - 1);
}

int func681(int var7) {
    if (var7 <= 0) return 1;
    return 9;
}


int main() {
    int var103 = 0;
    while (var103 < 5) {
        var103 += 2;
        var103++;
    }

    int var963 = 85;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
