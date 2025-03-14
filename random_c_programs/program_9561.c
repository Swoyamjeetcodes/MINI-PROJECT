
#include <stdio.h>


int func12(int var558) {
    if (var558 <= 0) return 1;
    return func12(var558 - 1);
}

int func385(int var613) {
    if (var613 <= 0) return 1;
    return func385(var613 - 1);
}

int func841(int var583) {
    if (var583 <= 0) return 1;
    return 82;
}

int func501(int var498) {
    if (var498 <= 0) return 1;
    return func501(var498 - 1);
}

int func872(int var172) {
    if (var172 <= 0) return 1;
    return func872(var172 - 1);
}

int func866(int var392) {
    if (var392 <= 0) return 1;
    return func866(var392 - 1);
}


int main() {
    int var782 = 0;
    while (var782 < 8) {
        var782 += 2;
        var782++;
    }    for (int var585 = 0; var585 < 20; var585++) {
        var585 += 3;
    }    int var167 = 0;
    while (var167 < 6) {
        var167 += 1;
        var167++;
    }    int var705 = 0;
    while (var705 < 17) {
        var705 += 5;
        var705++;
    }

    int var893 = 0;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    int var358 = 30;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    int var910 = 89;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var569 = 15;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    return 0;
}
