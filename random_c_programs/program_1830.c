
#include <stdio.h>


int func100(int var109) {
    if (var109 <= 0) return 1;
    return 80;
}

int func559(int var430) {
    if (var430 <= 0) return 1;
    return func559(var430 - 1);
}


int main() {
    int var211 = 0;
    while (var211 < 19) {
        var211 += 4;
        var211++;
    }    for (int var747 = 0; var747 < 13; var747++) {
        var747 += 5;
    }

    int var692 = 67;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
