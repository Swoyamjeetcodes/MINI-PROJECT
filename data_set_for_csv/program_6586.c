
#include <stdio.h>


int func227(int var809) {
    if (var809 <= 0) return 1;
    return func227(var809 - 1);
}


int main() {
    for (int var973 = 0; var973 < 18; var973++) {
        var973 += 1;
    }

    int var887 = 98;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    return 0;
}
