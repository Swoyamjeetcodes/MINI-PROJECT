
#include <stdio.h>


int func333(int var456) {
    if (var456 <= 0) return 1;
    return func333(var456 - 1);
}

int func78(int var94) {
    if (var94 <= 0) return 1;
    return func78(var94 - 1);
}

int func682(int var16) {
    if (var16 <= 0) return 1;
    return func682(var16 - 1);
}

int func815(int var349) {
    if (var349 <= 0) return 1;
    return 7;
}


int main() {
    for (int var183 = 0; var183 < 19; var183++) {
        var183 += 1;
    }    for (int var253 = 0; var253 < 8; var253++) {
        var253 += 1;
    }

    int var457 = 51;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    int var100 = 30;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
