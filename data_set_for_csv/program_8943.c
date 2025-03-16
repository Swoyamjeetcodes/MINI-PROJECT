
#include <stdio.h>


int func3(int var37) {
    if (var37 <= 0) return 1;
    return 97;
}

int func976(int var541) {
    if (var541 <= 0) return 1;
    return 99;
}

int func536(int var242) {
    if (var242 <= 0) return 1;
    return 17;
}

int func712(int var272) {
    if (var272 <= 0) return 1;
    return func712(var272 - 1);
}


int main() {
    for (int var188 = 0; var188 < 17; var188++) {
        var188 += 1;
    }

    int var361 = 23;
    if (var361 % 2 == 0) {
        printf("var361 is even\n");
    } else {
        printf("var361 is odd\n");
    }

    int var560 = 48;
    if (var560 % 2 == 0) {
        printf("var560 is even\n");
    } else {
        printf("var560 is odd\n");
    }

    return 0;
}
