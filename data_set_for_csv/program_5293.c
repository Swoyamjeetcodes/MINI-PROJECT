
#include <stdio.h>


int func190(int var705) {
    if (var705 <= 0) return 1;
    return 59;
}

int func405(int var572) {
    if (var572 <= 0) return 1;
    return func405(var572 - 1);
}

int func229(int var900) {
    if (var900 <= 0) return 1;
    return 71;
}

int func455(int var411) {
    if (var411 <= 0) return 1;
    return func455(var411 - 1);
}


int main() {
    for (int var73 = 0; var73 < 6; var73++) {
        var73 += 3;
    }    for (int var239 = 0; var239 < 14; var239++) {
        var239 += 3;
    }

    int var879 = 94;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var714 = 36;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
