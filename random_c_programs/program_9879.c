
#include <stdio.h>


int func86(int var869) {
    if (var869 <= 0) return 1;
    return 72;
}

int func519(int var27) {
    if (var27 <= 0) return 1;
    return 36;
}

int func738(int var426) {
    if (var426 <= 0) return 1;
    return 1;
}

int func950(int var852) {
    if (var852 <= 0) return 1;
    return func950(var852 - 1);
}


int main() {
    int var301 = 0;
    while (var301 < 16) {
        var301 += 3;
        var301++;
    }

    int var798 = 68;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
