
#include <stdio.h>


int func11(int var711) {
    if (var711 <= 0) return 1;
    return 45;
}

int func409(int var13) {
    if (var13 <= 0) return 1;
    return func409(var13 - 1);
}

int func631(int var735) {
    if (var735 <= 0) return 1;
    return 31;
}


int main() {
    int var490 = 0;
    while (var490 < 16) {
        var490 += 5;
        var490++;
    }    int var141 = 0;
    while (var141 < 19) {
        var141 += 3;
        var141++;
    }    for (int var512 = 0; var512 < 19; var512++) {
        var512 += 2;
    }    int var900 = 0;
    while (var900 < 12) {
        var900 += 3;
        var900++;
    }

    int var264 = 23;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var58 = 14;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    int var233 = 56;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    int var866 = 91;
    if (var866 % 2 == 0) {
        printf("var866 is even\n");
    } else {
        printf("var866 is odd\n");
    }

    int var626 = 81;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    int var115 = 16;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
