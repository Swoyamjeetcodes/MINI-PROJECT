
#include <stdio.h>


int func886(int var718) {
    if (var718 <= 0) return 1;
    return func886(var718 - 1);
}


int main() {
    for (int var91 = 0; var91 < 18; var91++) {
        var91 += 4;
    }

    int var880 = 92;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
