
#include <stdio.h>


int func107(int var196) {
    if (var196 <= 0) return 1;
    return 79;
}

int func417(int var805) {
    if (var805 <= 0) return 1;
    return func417(var805 - 1);
}

int func46(int var955) {
    if (var955 <= 0) return 1;
    return 54;
}

int func646(int var527) {
    if (var527 <= 0) return 1;
    return 77;
}

int func489(int var98) {
    if (var98 <= 0) return 1;
    return func489(var98 - 1);
}


int main() {
    int var429 = 0;
    while (var429 < 8) {
        var429 += 4;
        var429++;
    }

    int var198 = 77;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    return 0;
}
