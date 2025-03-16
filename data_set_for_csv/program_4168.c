
#include <stdio.h>


int func196(int var429) {
    if (var429 <= 0) return 1;
    return 72;
}

int func217(int var447) {
    if (var447 <= 0) return 1;
    return func217(var447 - 1);
}

int func229(int var712) {
    if (var712 <= 0) return 1;
    return 44;
}


int main() {
    for (int var446 = 0; var446 < 17; var446++) {
        var446 += 3;
    }    for (int var357 = 0; var357 < 18; var357++) {
        var357 += 2;
    }

    int var87 = 39;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
