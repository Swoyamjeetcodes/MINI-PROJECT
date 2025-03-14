
#include <stdio.h>


int func7(int var501) {
    if (var501 <= 0) return 1;
    return func7(var501 - 1);
}

int func746(int var550) {
    if (var550 <= 0) return 1;
    return func746(var550 - 1);
}

int func626(int var601) {
    if (var601 <= 0) return 1;
    return 79;
}

int func575(int var480) {
    if (var480 <= 0) return 1;
    return 63;
}

int func353(int var818) {
    if (var818 <= 0) return 1;
    return func353(var818 - 1);
}


int main() {
    for (int var845 = 0; var845 < 10; var845++) {
        var845 += 1;
    }

    int var3 = 19;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
