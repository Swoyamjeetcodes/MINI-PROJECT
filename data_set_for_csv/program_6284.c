
#include <stdio.h>


int func617(int var794) {
    if (var794 <= 0) return 1;
    return func617(var794 - 1);
}

int func635(int var775) {
    if (var775 <= 0) return 1;
    return 53;
}

int func918(int var623) {
    if (var623 <= 0) return 1;
    return 24;
}

int func961(int var907) {
    if (var907 <= 0) return 1;
    return func961(var907 - 1);
}


int main() {
    int var8 = 0;
    while (var8 < 5) {
        var8 += 4;
        var8++;
    }

    int var461 = 91;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    return 0;
}
