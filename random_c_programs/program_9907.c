
#include <stdio.h>


int func510(int var308) {
    if (var308 <= 0) return 1;
    return 40;
}

int func825(int var77) {
    if (var77 <= 0) return 1;
    return func825(var77 - 1);
}

int func443(int var828) {
    if (var828 <= 0) return 1;
    return func443(var828 - 1);
}

int func887(int var70) {
    if (var70 <= 0) return 1;
    return func887(var70 - 1);
}


int main() {
    int var606 = 0;
    while (var606 < 9) {
        var606 += 3;
        var606++;
    }    for (int var905 = 0; var905 < 8; var905++) {
        var905 += 3;
    }

    int var612 = 14;
    if (var612 % 2 == 0) {
        printf("var612 is even\n");
    } else {
        printf("var612 is odd\n");
    }

    int var917 = 14;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
