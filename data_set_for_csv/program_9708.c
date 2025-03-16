
#include <stdio.h>


int func907(int var645) {
    if (var645 <= 0) return 1;
    return func907(var645 - 1);
}

int func74(int var759) {
    if (var759 <= 0) return 1;
    return 4;
}

int func558(int var885) {
    if (var885 <= 0) return 1;
    return func558(var885 - 1);
}

int func60(int var326) {
    if (var326 <= 0) return 1;
    return func60(var326 - 1);
}


int main() {
    for (int var911 = 0; var911 < 15; var911++) {
        var911 += 3;
    }    for (int var483 = 0; var483 < 16; var483++) {
        var483 += 3;
    }

    int var228 = 39;
    if (var228 % 2 == 0) {
        printf("var228 is even\n");
    } else {
        printf("var228 is odd\n");
    }

    int var963 = 21;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
