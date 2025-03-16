
#include <stdio.h>


int func555(int var888) {
    if (var888 <= 0) return 1;
    return func555(var888 - 1);
}

int func579(int var780) {
    if (var780 <= 0) return 1;
    return func579(var780 - 1);
}

int func953(int var762) {
    if (var762 <= 0) return 1;
    return func953(var762 - 1);
}

int func924(int var667) {
    if (var667 <= 0) return 1;
    return 100;
}

int func709(int var564) {
    if (var564 <= 0) return 1;
    return func709(var564 - 1);
}


int main() {
    int var249 = 0;
    while (var249 < 5) {
        var249 += 5;
        var249++;
    }    for (int var826 = 0; var826 < 19; var826++) {
        var826 += 3;
    }

    int var726 = 10;
    if (var726 % 2 == 0) {
        printf("var726 is even\n");
    } else {
        printf("var726 is odd\n");
    }

    int var949 = 3;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    return 0;
}
