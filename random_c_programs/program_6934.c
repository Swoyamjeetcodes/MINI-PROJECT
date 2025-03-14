
#include <stdio.h>


int func60(int var231) {
    if (var231 <= 0) return 1;
    return func60(var231 - 1);
}


int main() {
    for (int var354 = 0; var354 < 10; var354++) {
        var354 += 3;
    }

    int var836 = 60;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    return 0;
}
