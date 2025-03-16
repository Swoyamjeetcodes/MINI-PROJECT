
#include <stdio.h>


int func888(int var838) {
    if (var838 <= 0) return 1;
    return func888(var838 - 1);
}

int func305(int var736) {
    if (var736 <= 0) return 1;
    return func305(var736 - 1);
}

int func485(int var172) {
    if (var172 <= 0) return 1;
    return 85;
}

int func149(int var704) {
    if (var704 <= 0) return 1;
    return func149(var704 - 1);
}

int func21(int var998) {
    if (var998 <= 0) return 1;
    return 53;
}


int main() {
    for (int var882 = 0; var882 < 17; var882++) {
        var882 += 2;
    }    for (int var432 = 0; var432 < 20; var432++) {
        var432 += 1;
    }

    int var405 = 61;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    return 0;
}
