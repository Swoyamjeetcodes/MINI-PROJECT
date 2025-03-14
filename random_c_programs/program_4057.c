
#include <stdio.h>


int func76(int var190) {
    if (var190 <= 0) return 1;
    return func76(var190 - 1);
}


int main() {
    for (int var47 = 0; var47 < 12; var47++) {
        var47 += 5;
    }

    int var313 = 14;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}
