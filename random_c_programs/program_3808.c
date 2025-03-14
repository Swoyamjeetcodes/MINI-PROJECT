
#include <stdio.h>


int func259(int var57) {
    if (var57 <= 0) return 1;
    return func259(var57 - 1);
}

int func388(int var957) {
    if (var957 <= 0) return 1;
    return func388(var957 - 1);
}

int func183(int var725) {
    if (var725 <= 0) return 1;
    return 25;
}

int func485(int var425) {
    if (var425 <= 0) return 1;
    return func485(var425 - 1);
}

int func221(int var388) {
    if (var388 <= 0) return 1;
    return func221(var388 - 1);
}


int main() {
    int var499 = 0;
    while (var499 < 14) {
        var499 += 1;
        var499++;
    }

    int var928 = 21;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    return 0;
}
