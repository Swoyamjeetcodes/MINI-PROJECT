
#include <stdio.h>


int func14(int var195) {
    if (var195 <= 0) return 1;
    return func14(var195 - 1);
}


int main() {
    for (int var804 = 0; var804 < 17; var804++) {
        var804 += 3;
    }    int var16 = 0;
    while (var16 < 10) {
        var16 += 5;
        var16++;
    }    int var937 = 0;
    while (var937 < 9) {
        var937 += 2;
        var937++;
    }

    int var904 = 86;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
