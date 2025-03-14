
#include <stdio.h>


int func467(int var491) {
    if (var491 <= 0) return 1;
    return func467(var491 - 1);
}

int func71(int var573) {
    if (var573 <= 0) return 1;
    return func71(var573 - 1);
}

int func670(int var306) {
    if (var306 <= 0) return 1;
    return 8;
}

int func208(int var455) {
    if (var455 <= 0) return 1;
    return func208(var455 - 1);
}

int func464(int var143) {
    if (var143 <= 0) return 1;
    return 56;
}


int main() {
    for (int var839 = 0; var839 < 13; var839++) {
        var839 += 3;
    }    int var97 = 0;
    while (var97 < 17) {
        var97 += 1;
        var97++;
    }

    int var382 = 70;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var142 = 82;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
