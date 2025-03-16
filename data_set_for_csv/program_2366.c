
#include <stdio.h>


int func293(int var50) {
    if (var50 <= 0) return 1;
    return 92;
}

int func709(int var2) {
    if (var2 <= 0) return 1;
    return func709(var2 - 1);
}

int func139(int var790) {
    if (var790 <= 0) return 1;
    return func139(var790 - 1);
}

int func261(int var59) {
    if (var59 <= 0) return 1;
    return 59;
}

int func272(int var85) {
    if (var85 <= 0) return 1;
    return func272(var85 - 1);
}


int main() {
    int var344 = 0;
    while (var344 < 19) {
        var344 += 2;
        var344++;
    }

    int var157 = 70;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
