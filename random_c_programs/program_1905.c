
#include <stdio.h>


int func630(int var116) {
    if (var116 <= 0) return 1;
    return func630(var116 - 1);
}


int main() {
    for (int var743 = 0; var743 < 12; var743++) {
        var743 += 3;
    }    int var845 = 0;
    while (var845 < 19) {
        var845 += 2;
        var845++;
    }    for (int var624 = 0; var624 < 19; var624++) {
        var624 += 3;
    }

    int var199 = 25;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var171 = 89;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    int var60 = 43;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    return 0;
}
