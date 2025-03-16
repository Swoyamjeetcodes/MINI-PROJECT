
#include <stdio.h>


int func394(int var289) {
    if (var289 <= 0) return 1;
    return func394(var289 - 1);
}

int func2(int var380) {
    if (var380 <= 0) return 1;
    return func2(var380 - 1);
}

int func796(int var900) {
    if (var900 <= 0) return 1;
    return func796(var900 - 1);
}


int main() {
    int var641 = 0;
    while (var641 < 5) {
        var641 += 4;
        var641++;
    }    for (int var638 = 0; var638 < 18; var638++) {
        var638 += 3;
    }

    int var216 = 69;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    int var267 = 67;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
