
#include <stdio.h>


int func317(int var812) {
    if (var812 <= 0) return 1;
    return func317(var812 - 1);
}


int main() {
    for (int var353 = 0; var353 < 13; var353++) {
        var353 += 4;
    }

    int var557 = 30;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    return 0;
}
