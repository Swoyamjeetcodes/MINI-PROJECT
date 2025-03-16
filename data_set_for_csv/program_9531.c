
#include <stdio.h>


int func232(int var308) {
    if (var308 <= 0) return 1;
    return 9;
}

int func895(int var659) {
    if (var659 <= 0) return 1;
    return func895(var659 - 1);
}

int func394(int var886) {
    if (var886 <= 0) return 1;
    return 27;
}


int main() {
    int var397 = 0;
    while (var397 < 11) {
        var397 += 1;
        var397++;
    }    for (int var799 = 0; var799 < 9; var799++) {
        var799 += 5;
    }

    int var393 = 99;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
