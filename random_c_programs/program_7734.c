
#include <stdio.h>


int func499(int var82) {
    if (var82 <= 0) return 1;
    return func499(var82 - 1);
}

int func418(int var255) {
    if (var255 <= 0) return 1;
    return func418(var255 - 1);
}


int main() {
    int var875 = 0;
    while (var875 < 19) {
        var875 += 4;
        var875++;
    }

    int var328 = 66;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    return 0;
}
