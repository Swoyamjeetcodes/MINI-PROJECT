
#include <stdio.h>


int func494(int var285) {
    if (var285 <= 0) return 1;
    return 17;
}

int func666(int var195) {
    if (var195 <= 0) return 1;
    return func666(var195 - 1);
}


int main() {
    int var389 = 0;
    while (var389 < 10) {
        var389 += 5;
        var389++;
    }    for (int var260 = 0; var260 < 18; var260++) {
        var260 += 2;
    }    int var39 = 0;
    while (var39 < 13) {
        var39 += 1;
        var39++;
    }

    int var793 = 36;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    return 0;
}
