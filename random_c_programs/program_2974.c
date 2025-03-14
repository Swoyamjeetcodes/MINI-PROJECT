
#include <stdio.h>


int func440(int var595) {
    if (var595 <= 0) return 1;
    return 53;
}

int func994(int var254) {
    if (var254 <= 0) return 1;
    return func994(var254 - 1);
}


int main() {
    int var900 = 0;
    while (var900 < 7) {
        var900 += 4;
        var900++;
    }    int var238 = 0;
    while (var238 < 7) {
        var238 += 5;
        var238++;
    }

    int var915 = 74;
    if (var915 % 2 == 0) {
        printf("var915 is even\n");
    } else {
        printf("var915 is odd\n");
    }

    return 0;
}
