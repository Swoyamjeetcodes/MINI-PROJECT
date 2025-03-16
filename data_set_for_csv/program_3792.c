
#include <stdio.h>


int func314(int var711) {
    if (var711 <= 0) return 1;
    return func314(var711 - 1);
}


int main() {
    for (int var151 = 0; var151 < 5; var151++) {
        var151 += 3;
    }

    int var114 = 92;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    return 0;
}
