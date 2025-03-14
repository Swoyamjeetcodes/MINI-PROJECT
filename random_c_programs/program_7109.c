
#include <stdio.h>


int func908(int var34) {
    if (var34 <= 0) return 1;
    return func908(var34 - 1);
}

int func259(int var488) {
    if (var488 <= 0) return 1;
    return func259(var488 - 1);
}

int func52(int var894) {
    if (var894 <= 0) return 1;
    return 45;
}

int func66(int var401) {
    if (var401 <= 0) return 1;
    return func66(var401 - 1);
}


int main() {
    for (int var359 = 0; var359 < 19; var359++) {
        var359 += 5;
    }    int var509 = 0;
    while (var509 < 12) {
        var509 += 4;
        var509++;
    }

    int var717 = 82;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    int var220 = 17;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
