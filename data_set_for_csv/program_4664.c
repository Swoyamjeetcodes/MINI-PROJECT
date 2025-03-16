
#include <stdio.h>


int func908(int var706) {
    if (var706 <= 0) return 1;
    return func908(var706 - 1);
}

int func276(int var883) {
    if (var883 <= 0) return 1;
    return 29;
}

int func653(int var420) {
    if (var420 <= 0) return 1;
    return 77;
}

int func398(int var611) {
    if (var611 <= 0) return 1;
    return func398(var611 - 1);
}

int func155(int var784) {
    if (var784 <= 0) return 1;
    return func155(var784 - 1);
}

int func875(int var239) {
    if (var239 <= 0) return 1;
    return func875(var239 - 1);
}

int func511(int var223) {
    if (var223 <= 0) return 1;
    return 42;
}


int main() {
    int var112 = 0;
    while (var112 < 18) {
        var112 += 4;
        var112++;
    }    int var709 = 0;
    while (var709 < 19) {
        var709 += 1;
        var709++;
    }    for (int var650 = 0; var650 < 19; var650++) {
        var650 += 2;
    }    for (int var857 = 0; var857 < 8; var857++) {
        var857 += 3;
    }

    int var716 = 98;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    int var78 = 91;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
