
#include <stdio.h>


int func817(int var660) {
    if (var660 <= 0) return 1;
    return 80;
}

int func190(int var328) {
    if (var328 <= 0) return 1;
    return func190(var328 - 1);
}

int func838(int var286) {
    if (var286 <= 0) return 1;
    return func838(var286 - 1);
}


int main() {
    for (int var116 = 0; var116 < 8; var116++) {
        var116 += 3;
    }

    int var619 = 27;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    int var36 = 1;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    return 0;
}
