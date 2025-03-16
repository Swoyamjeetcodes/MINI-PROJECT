
#include <stdio.h>


int func575(int var684) {
    if (var684 <= 0) return 1;
    return 40;
}

int func867(int var722) {
    if (var722 <= 0) return 1;
    return func867(var722 - 1);
}

int func359(int var89) {
    if (var89 <= 0) return 1;
    return func359(var89 - 1);
}


int main() {
    int var3 = 0;
    while (var3 < 6) {
        var3 += 4;
        var3++;
    }

    int var709 = 46;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    int var317 = 82;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    return 0;
}
