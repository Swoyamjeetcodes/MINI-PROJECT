
#include <stdio.h>


int func329(int var474) {
    if (var474 <= 0) return 1;
    return func329(var474 - 1);
}

int func342(int var134) {
    if (var134 <= 0) return 1;
    return func342(var134 - 1);
}

int func952(int var224) {
    if (var224 <= 0) return 1;
    return func952(var224 - 1);
}

int func524(int var791) {
    if (var791 <= 0) return 1;
    return 96;
}


int main() {
    for (int var101 = 0; var101 < 19; var101++) {
        var101 += 5;
    }

    int var392 = 78;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    int var384 = 64;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    return 0;
}
