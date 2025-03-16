
#include <stdio.h>


int func990(int var846) {
    if (var846 <= 0) return 1;
    return func990(var846 - 1);
}


int main() {
    for (int var940 = 0; var940 < 15; var940++) {
        var940 += 3;
    }

    int var772 = 14;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
