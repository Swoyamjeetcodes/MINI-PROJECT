
#include <stdio.h>


int func411(int var308) {
    if (var308 <= 0) return 1;
    return func411(var308 - 1);
}

int func888(int var558) {
    if (var558 <= 0) return 1;
    return func888(var558 - 1);
}


int main() {
    for (int var710 = 0; var710 < 11; var710++) {
        var710 += 3;
    }

    int var801 = 74;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
