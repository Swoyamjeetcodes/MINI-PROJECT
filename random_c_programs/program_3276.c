
#include <stdio.h>


int func215(int var380) {
    if (var380 <= 0) return 1;
    return func215(var380 - 1);
}


int main() {
    for (int var519 = 0; var519 < 7; var519++) {
        var519 += 3;
    }

    int var337 = 77;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    return 0;
}
