
#include <stdio.h>


int func835(int var650) {
    if (var650 <= 0) return 1;
    return func835(var650 - 1);
}


int main() {
    for (int var999 = 0; var999 < 20; var999++) {
        var999 += 1;
    }

    int var221 = 76;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
