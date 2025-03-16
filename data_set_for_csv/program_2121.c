
#include <stdio.h>


int func738(int var164) {
    if (var164 <= 0) return 1;
    return func738(var164 - 1);
}

int func321(int var239) {
    if (var239 <= 0) return 1;
    return func321(var239 - 1);
}

int func649(int var734) {
    if (var734 <= 0) return 1;
    return func649(var734 - 1);
}

int func210(int var172) {
    if (var172 <= 0) return 1;
    return func210(var172 - 1);
}

int func254(int var573) {
    if (var573 <= 0) return 1;
    return func254(var573 - 1);
}


int main() {
    int var746 = 0;
    while (var746 < 19) {
        var746 += 2;
        var746++;
    }

    int var821 = 44;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
