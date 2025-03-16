
#include <stdio.h>


int func187(int var916) {
    if (var916 <= 0) return 1;
    return func187(var916 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 19) {
        var540 += 4;
        var540++;
    }

    int var470 = 1;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
