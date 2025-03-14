
#include <stdio.h>


int func940(int var525) {
    if (var525 <= 0) return 1;
    return 45;
}

int func704(int var933) {
    if (var933 <= 0) return 1;
    return func704(var933 - 1);
}

int func293(int var797) {
    if (var797 <= 0) return 1;
    return func293(var797 - 1);
}

int func843(int var925) {
    if (var925 <= 0) return 1;
    return 82;
}


int main() {
    for (int var93 = 0; var93 < 9; var93++) {
        var93 += 4;
    }

    int var126 = 34;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    int var870 = 65;
    if (var870 % 2 == 0) {
        printf("var870 is even\n");
    } else {
        printf("var870 is odd\n");
    }

    int var197 = 9;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
