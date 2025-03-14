
#include <stdio.h>


int func230(int var908) {
    if (var908 <= 0) return 1;
    return 26;
}

int func243(int var688) {
    if (var688 <= 0) return 1;
    return 85;
}

int func655(int var192) {
    if (var192 <= 0) return 1;
    return func655(var192 - 1);
}

int func192(int var245) {
    if (var245 <= 0) return 1;
    return 66;
}

int func924(int var832) {
    if (var832 <= 0) return 1;
    return func924(var832 - 1);
}


int main() {
    int var492 = 0;
    while (var492 < 7) {
        var492 += 5;
        var492++;
    }    for (int var250 = 0; var250 < 13; var250++) {
        var250 += 4;
    }    for (int var958 = 0; var958 < 17; var958++) {
        var958 += 2;
    }

    int var867 = 6;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
