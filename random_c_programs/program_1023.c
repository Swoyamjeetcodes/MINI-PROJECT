
#include <stdio.h>


int func585(int var740) {
    if (var740 <= 0) return 1;
    return func585(var740 - 1);
}

int func540(int var708) {
    if (var708 <= 0) return 1;
    return func540(var708 - 1);
}

int func249(int var258) {
    if (var258 <= 0) return 1;
    return func249(var258 - 1);
}


int main() {
    for (int var20 = 0; var20 < 10; var20++) {
        var20 += 4;
    }

    int var705 = 23;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
