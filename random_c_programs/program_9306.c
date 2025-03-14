
#include <stdio.h>


int func968(int var134) {
    if (var134 <= 0) return 1;
    return func968(var134 - 1);
}


int main() {
    int var233 = 0;
    while (var233 < 6) {
        var233 += 2;
        var233++;
    }

    int var470 = 97;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
