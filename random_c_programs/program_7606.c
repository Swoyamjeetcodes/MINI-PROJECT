
#include <stdio.h>


int func644(int var428) {
    if (var428 <= 0) return 1;
    return func644(var428 - 1);
}

int func126(int var443) {
    if (var443 <= 0) return 1;
    return func126(var443 - 1);
}

int func778(int var872) {
    if (var872 <= 0) return 1;
    return 94;
}

int func311(int var407) {
    if (var407 <= 0) return 1;
    return 51;
}


int main() {
    int var165 = 0;
    while (var165 < 7) {
        var165 += 3;
        var165++;
    }

    int var767 = 36;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    int var46 = 49;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
