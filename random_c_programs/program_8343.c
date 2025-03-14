
#include <stdio.h>


int func124(int var406) {
    if (var406 <= 0) return 1;
    return 62;
}

int func469(int var243) {
    if (var243 <= 0) return 1;
    return 89;
}

int func653(int var796) {
    if (var796 <= 0) return 1;
    return func653(var796 - 1);
}

int func210(int var214) {
    if (var214 <= 0) return 1;
    return func210(var214 - 1);
}

int func888(int var596) {
    if (var596 <= 0) return 1;
    return func888(var596 - 1);
}


int main() {
    for (int var109 = 0; var109 < 5; var109++) {
        var109 += 4;
    }    int var697 = 0;
    while (var697 < 9) {
        var697 += 4;
        var697++;
    }

    int var748 = 19;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
