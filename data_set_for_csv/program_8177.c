
#include <stdio.h>


int func718(int var18) {
    if (var18 <= 0) return 1;
    return 61;
}

int func890(int var875) {
    if (var875 <= 0) return 1;
    return func890(var875 - 1);
}


int main() {
    for (int var245 = 0; var245 < 15; var245++) {
        var245 += 3;
    }

    int var67 = 58;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    int var789 = 93;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    int var570 = 83;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
