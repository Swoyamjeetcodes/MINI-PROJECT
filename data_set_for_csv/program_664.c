
#include <stdio.h>


int func909(int var57) {
    if (var57 <= 0) return 1;
    return func909(var57 - 1);
}

int func311(int var409) {
    if (var409 <= 0) return 1;
    return func311(var409 - 1);
}


int main() {
    int var52 = 0;
    while (var52 < 10) {
        var52 += 1;
        var52++;
    }

    int var828 = 4;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var16 = 20;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    return 0;
}
