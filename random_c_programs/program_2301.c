
#include <stdio.h>


int func259(int var943) {
    if (var943 <= 0) return 1;
    return 40;
}

int func718(int var43) {
    if (var43 <= 0) return 1;
    return 7;
}

int func87(int var567) {
    if (var567 <= 0) return 1;
    return func87(var567 - 1);
}


int main() {
    int var181 = 0;
    while (var181 < 18) {
        var181 += 1;
        var181++;
    }

    int var916 = 63;
    if (var916 % 2 == 0) {
        printf("var916 is even\n");
    } else {
        printf("var916 is odd\n");
    }

    int var808 = 33;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    return 0;
}
