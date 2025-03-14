
#include <stdio.h>


int func491(int var626) {
    if (var626 <= 0) return 1;
    return func491(var626 - 1);
}

int func227(int var217) {
    if (var217 <= 0) return 1;
    return 60;
}

int func874(int var879) {
    if (var879 <= 0) return 1;
    return func874(var879 - 1);
}


int main() {
    for (int var642 = 0; var642 < 16; var642++) {
        var642 += 4;
    }    int var186 = 0;
    while (var186 < 13) {
        var186 += 1;
        var186++;
    }

    int var798 = 52;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
