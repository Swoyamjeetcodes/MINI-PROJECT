
#include <stdio.h>


int func305(int var45) {
    if (var45 <= 0) return 1;
    return func305(var45 - 1);
}

int func860(int var432) {
    if (var432 <= 0) return 1;
    return func860(var432 - 1);
}

int func125(int var184) {
    if (var184 <= 0) return 1;
    return func125(var184 - 1);
}

int func290(int var756) {
    if (var756 <= 0) return 1;
    return 34;
}


int main() {
    int var729 = 0;
    while (var729 < 13) {
        var729 += 5;
        var729++;
    }

    int var753 = 41;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    int var807 = 34;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
