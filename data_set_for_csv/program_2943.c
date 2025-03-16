
#include <stdio.h>


int func693(int var422) {
    if (var422 <= 0) return 1;
    return func693(var422 - 1);
}

int func327(int var350) {
    if (var350 <= 0) return 1;
    return 80;
}

int func35(int var608) {
    if (var608 <= 0) return 1;
    return 86;
}

int func847(int var704) {
    if (var704 <= 0) return 1;
    return func847(var704 - 1);
}


int main() {
    int var568 = 0;
    while (var568 < 14) {
        var568 += 1;
        var568++;
    }

    int var442 = 80;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
