
#include <stdio.h>


int func273(int var819) {
    if (var819 <= 0) return 1;
    return func273(var819 - 1);
}


int main() {
    for (int var354 = 0; var354 < 14; var354++) {
        var354 += 5;
    }

    int var98 = 78;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    return 0;
}
