
#include <stdio.h>


int func396(int var260) {
    if (var260 <= 0) return 1;
    return func396(var260 - 1);
}


int main() {
    int var19 = 0;
    while (var19 < 14) {
        var19 += 4;
        var19++;
    }

    int var719 = 97;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
