
#include <stdio.h>


int func996(int var695) {
    if (var695 <= 0) return 1;
    return 66;
}

int func56(int var376) {
    if (var376 <= 0) return 1;
    return func56(var376 - 1);
}

int func218(int var43) {
    if (var43 <= 0) return 1;
    return func218(var43 - 1);
}

int func502(int var869) {
    if (var869 <= 0) return 1;
    return 50;
}


int main() {
    for (int var985 = 0; var985 < 17; var985++) {
        var985 += 4;
    }

    int var666 = 10;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
