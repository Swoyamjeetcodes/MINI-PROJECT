
#include <stdio.h>


int func568(int var199) {
    if (var199 <= 0) return 1;
    return 50;
}

int func419(int var230) {
    if (var230 <= 0) return 1;
    return func419(var230 - 1);
}


int main() {
    for (int var955 = 0; var955 < 17; var955++) {
        var955 += 5;
    }    int var284 = 0;
    while (var284 < 15) {
        var284 += 3;
        var284++;
    }    int var645 = 0;
    while (var645 < 5) {
        var645 += 3;
        var645++;
    }

    int var538 = 51;
    if (var538 % 2 == 0) {
        printf("var538 is even\n");
    } else {
        printf("var538 is odd\n");
    }

    return 0;
}
