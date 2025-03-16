
#include <stdio.h>


int func13(int var20) {
    if (var20 <= 0) return 1;
    return func13(var20 - 1);
}

int func307(int var63) {
    if (var63 <= 0) return 1;
    return 13;
}


int main() {
    for (int var856 = 0; var856 < 16; var856++) {
        var856 += 2;
    }    int var164 = 0;
    while (var164 < 10) {
        var164 += 5;
        var164++;
    }    int var29 = 0;
    while (var29 < 8) {
        var29 += 4;
        var29++;
    }

    int var126 = 99;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    return 0;
}
