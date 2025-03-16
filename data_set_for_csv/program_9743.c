
#include <stdio.h>


int func907(int var1000) {
    if (var1000 <= 0) return 1;
    return func907(var1000 - 1);
}


int main() {
    for (int var175 = 0; var175 < 8; var175++) {
        var175 += 4;
    }

    int var433 = 12;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
