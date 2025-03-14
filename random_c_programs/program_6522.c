
#include <stdio.h>


int func824(int var93) {
    if (var93 <= 0) return 1;
    return 71;
}

int func129(int var595) {
    if (var595 <= 0) return 1;
    return func129(var595 - 1);
}

int func134(int var703) {
    if (var703 <= 0) return 1;
    return func134(var703 - 1);
}

int func551(int var744) {
    if (var744 <= 0) return 1;
    return 70;
}


int main() {
    int var60 = 0;
    while (var60 < 18) {
        var60 += 3;
        var60++;
    }    int var474 = 0;
    while (var474 < 19) {
        var474 += 1;
        var474++;
    }

    int var659 = 72;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    int var26 = 10;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
