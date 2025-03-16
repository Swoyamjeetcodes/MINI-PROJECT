
#include <stdio.h>


int func501(int var287) {
    if (var287 <= 0) return 1;
    return func501(var287 - 1);
}

int func977(int var4) {
    if (var4 <= 0) return 1;
    return 52;
}

int func347(int var659) {
    if (var659 <= 0) return 1;
    return func347(var659 - 1);
}


int main() {
    for (int var134 = 0; var134 < 13; var134++) {
        var134 += 3;
    }    int var166 = 0;
    while (var166 < 12) {
        var166 += 1;
        var166++;
    }    int var854 = 0;
    while (var854 < 11) {
        var854 += 4;
        var854++;
    }

    int var108 = 55;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
