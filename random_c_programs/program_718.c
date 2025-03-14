
#include <stdio.h>


int func835(int var755) {
    if (var755 <= 0) return 1;
    return func835(var755 - 1);
}

int func914(int var902) {
    if (var902 <= 0) return 1;
    return 16;
}


int main() {
    for (int var286 = 0; var286 < 7; var286++) {
        var286 += 2;
    }

    int var520 = 11;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
