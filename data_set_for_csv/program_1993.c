
#include <stdio.h>


int func158(int var116) {
    if (var116 <= 0) return 1;
    return func158(var116 - 1);
}

int func573(int var276) {
    if (var276 <= 0) return 1;
    return func573(var276 - 1);
}

int func148(int var354) {
    if (var354 <= 0) return 1;
    return func148(var354 - 1);
}

int func799(int var201) {
    if (var201 <= 0) return 1;
    return func799(var201 - 1);
}


int main() {
    for (int var762 = 0; var762 < 17; var762++) {
        var762 += 1;
    }    int var228 = 0;
    while (var228 < 11) {
        var228 += 4;
        var228++;
    }    for (int var938 = 0; var938 < 8; var938++) {
        var938 += 1;
    }

    int var398 = 15;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    return 0;
}
