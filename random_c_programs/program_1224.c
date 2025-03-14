
#include <stdio.h>


int func996(int var876) {
    if (var876 <= 0) return 1;
    return 6;
}

int func55(int var171) {
    if (var171 <= 0) return 1;
    return 12;
}

int func368(int var924) {
    if (var924 <= 0) return 1;
    return func368(var924 - 1);
}

int func261(int var606) {
    if (var606 <= 0) return 1;
    return 90;
}


int main() {
    for (int var894 = 0; var894 < 15; var894++) {
        var894 += 5;
    }    for (int var1 = 0; var1 < 10; var1++) {
        var1 += 5;
    }

    int var314 = 44;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    int var20 = 91;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    return 0;
}
