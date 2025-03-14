
#include <stdio.h>


int func309(int var406) {
    if (var406 <= 0) return 1;
    return func309(var406 - 1);
}

int func725(int var884) {
    if (var884 <= 0) return 1;
    return 39;
}

int func314(int var240) {
    if (var240 <= 0) return 1;
    return 15;
}


int main() {
    for (int var942 = 0; var942 < 9; var942++) {
        var942 += 5;
    }    for (int var175 = 0; var175 < 17; var175++) {
        var175 += 5;
    }

    int var288 = 19;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    return 0;
}
