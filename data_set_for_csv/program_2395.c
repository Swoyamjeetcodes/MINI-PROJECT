
#include <stdio.h>


int func980(int var950) {
    if (var950 <= 0) return 1;
    return 15;
}

int func640(int var463) {
    if (var463 <= 0) return 1;
    return func640(var463 - 1);
}

int func184(int var749) {
    if (var749 <= 0) return 1;
    return 35;
}

int func75(int var997) {
    if (var997 <= 0) return 1;
    return func75(var997 - 1);
}

int func154(int var471) {
    if (var471 <= 0) return 1;
    return 28;
}


int main() {
    for (int var422 = 0; var422 < 11; var422++) {
        var422 += 3;
    }    for (int var392 = 0; var392 < 17; var392++) {
        var392 += 5;
    }

    int var275 = 53;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    return 0;
}
