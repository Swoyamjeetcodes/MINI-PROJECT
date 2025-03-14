
#include <stdio.h>


int func83(int var141) {
    if (var141 <= 0) return 1;
    return func83(var141 - 1);
}

int func963(int var537) {
    if (var537 <= 0) return 1;
    return 75;
}

int func999(int var773) {
    if (var773 <= 0) return 1;
    return func999(var773 - 1);
}

int func520(int var376) {
    if (var376 <= 0) return 1;
    return 3;
}

int func259(int var767) {
    if (var767 <= 0) return 1;
    return func259(var767 - 1);
}


int main() {
    int var584 = 0;
    while (var584 < 17) {
        var584 += 4;
        var584++;
    }    for (int var934 = 0; var934 < 10; var934++) {
        var934 += 3;
    }

    int var176 = 90;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    int var648 = 16;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    int var326 = 48;
    if (var326 % 2 == 0) {
        printf("var326 is even\n");
    } else {
        printf("var326 is odd\n");
    }

    return 0;
}
