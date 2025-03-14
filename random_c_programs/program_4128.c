
#include <stdio.h>


int func810(int var382) {
    if (var382 <= 0) return 1;
    return func810(var382 - 1);
}


int main() {
    int var68 = 0;
    while (var68 < 12) {
        var68 += 4;
        var68++;
    }

    int var226 = 65;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
