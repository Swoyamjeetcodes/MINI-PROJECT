
#include <stdio.h>


int func631(int var753) {
    if (var753 <= 0) return 1;
    return func631(var753 - 1);
}

int func74(int var708) {
    if (var708 <= 0) return 1;
    return 68;
}

int func511(int var780) {
    if (var780 <= 0) return 1;
    return func511(var780 - 1);
}


int main() {
    for (int var531 = 0; var531 < 16; var531++) {
        var531 += 3;
    }    int var903 = 0;
    while (var903 < 15) {
        var903 += 2;
        var903++;
    }

    int var189 = 73;
    if (var189 % 2 == 0) {
        printf("var189 is even\n");
    } else {
        printf("var189 is odd\n");
    }

    return 0;
}
