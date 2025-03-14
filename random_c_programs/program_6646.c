
#include <stdio.h>


int func172(int var183) {
    if (var183 <= 0) return 1;
    return 97;
}

int func67(int var852) {
    if (var852 <= 0) return 1;
    return func67(var852 - 1);
}

int func600(int var544) {
    if (var544 <= 0) return 1;
    return 11;
}


int main() {
    int var820 = 0;
    while (var820 < 10) {
        var820 += 2;
        var820++;
    }    for (int var58 = 0; var58 < 7; var58++) {
        var58 += 3;
    }    int var306 = 0;
    while (var306 < 17) {
        var306 += 1;
        var306++;
    }

    int var887 = 12;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    return 0;
}
