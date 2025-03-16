
#include <stdio.h>


int func426(int var405) {
    if (var405 <= 0) return 1;
    return 45;
}

int func210(int var293) {
    if (var293 <= 0) return 1;
    return func210(var293 - 1);
}

int func937(int var234) {
    if (var234 <= 0) return 1;
    return func937(var234 - 1);
}

int func38(int var942) {
    if (var942 <= 0) return 1;
    return 53;
}


int main() {
    int var349 = 0;
    while (var349 < 18) {
        var349 += 5;
        var349++;
    }    for (int var756 = 0; var756 < 7; var756++) {
        var756 += 4;
    }

    int var688 = 59;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    return 0;
}
