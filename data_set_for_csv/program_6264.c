
#include <stdio.h>


int func232(int var535) {
    if (var535 <= 0) return 1;
    return func232(var535 - 1);
}


int main() {
    int var412 = 0;
    while (var412 < 16) {
        var412 += 1;
        var412++;
    }

    int var122 = 96;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
