
#include <stdio.h>


int func322(int var261) {
    if (var261 <= 0) return 1;
    return func322(var261 - 1);
}


int main() {
    for (int var106 = 0; var106 < 5; var106++) {
        var106 += 2;
    }

    int var367 = 14;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
