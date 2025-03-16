
#include <stdio.h>


int func415(int var45) {
    if (var45 <= 0) return 1;
    return func415(var45 - 1);
}

int func338(int var642) {
    if (var642 <= 0) return 1;
    return 31;
}


int main() {
    int var43 = 0;
    while (var43 < 9) {
        var43 += 4;
        var43++;
    }

    int var27 = 60;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    return 0;
}
