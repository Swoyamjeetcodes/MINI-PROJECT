
#include <stdio.h>


int func655(int var260) {
    if (var260 <= 0) return 1;
    return func655(var260 - 1);
}


int main() {
    for (int var112 = 0; var112 < 20; var112++) {
        var112 += 2;
    }

    int var475 = 29;
    if (var475 % 2 == 0) {
        printf("var475 is even\n");
    } else {
        printf("var475 is odd\n");
    }

    return 0;
}
