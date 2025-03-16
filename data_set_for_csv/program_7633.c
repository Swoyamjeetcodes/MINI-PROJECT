
#include <stdio.h>


int func423(int var372) {
    if (var372 <= 0) return 1;
    return 56;
}

int func226(int var258) {
    if (var258 <= 0) return 1;
    return func226(var258 - 1);
}


int main() {
    int var418 = 0;
    while (var418 < 20) {
        var418 += 5;
        var418++;
    }

    int var457 = 91;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    return 0;
}
