
#include <stdio.h>


int func525(int var310) {
    if (var310 <= 0) return 1;
    return func525(var310 - 1);
}

int func177(int var552) {
    if (var552 <= 0) return 1;
    return func177(var552 - 1);
}

int func511(int var239) {
    if (var239 <= 0) return 1;
    return 35;
}

int func669(int var420) {
    if (var420 <= 0) return 1;
    return 82;
}


int main() {
    int var543 = 0;
    while (var543 < 19) {
        var543 += 4;
        var543++;
    }    int var811 = 0;
    while (var811 < 13) {
        var811 += 4;
        var811++;
    }

    int var38 = 47;
    if (var38 % 2 == 0) {
        printf("var38 is even\n");
    } else {
        printf("var38 is odd\n");
    }

    int var143 = 86;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var153 = 70;
    if (var153 % 2 == 0) {
        printf("var153 is even\n");
    } else {
        printf("var153 is odd\n");
    }

    return 0;
}
