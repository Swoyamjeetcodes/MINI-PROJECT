
#include <stdio.h>


int func959(int var591) {
    if (var591 <= 0) return 1;
    return 83;
}

int func290(int var266) {
    if (var266 <= 0) return 1;
    return func290(var266 - 1);
}


int main() {
    int var692 = 0;
    while (var692 < 10) {
        var692 += 5;
        var692++;
    }    for (int var120 = 0; var120 < 5; var120++) {
        var120 += 3;
    }    int var165 = 0;
    while (var165 < 8) {
        var165 += 1;
        var165++;
    }

    int var458 = 9;
    if (var458 % 2 == 0) {
        printf("var458 is even\n");
    } else {
        printf("var458 is odd\n");
    }

    return 0;
}
