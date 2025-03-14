
#include <stdio.h>


int func488(int var903) {
    if (var903 <= 0) return 1;
    return func488(var903 - 1);
}

int func880(int var261) {
    if (var261 <= 0) return 1;
    return func880(var261 - 1);
}

int func47(int var905) {
    if (var905 <= 0) return 1;
    return func47(var905 - 1);
}


int main() {
    for (int var678 = 0; var678 < 8; var678++) {
        var678 += 1;
    }

    int var710 = 34;
    if (var710 % 2 == 0) {
        printf("var710 is even\n");
    } else {
        printf("var710 is odd\n");
    }

    int var85 = 89;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var936 = 58;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
