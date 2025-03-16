
#include <stdio.h>


int func439(int var439) {
    if (var439 <= 0) return 1;
    return func439(var439 - 1);
}

int func350(int var968) {
    if (var968 <= 0) return 1;
    return func350(var968 - 1);
}

int func801(int var816) {
    if (var816 <= 0) return 1;
    return func801(var816 - 1);
}

int func488(int var417) {
    if (var417 <= 0) return 1;
    return 14;
}

int func625(int var818) {
    if (var818 <= 0) return 1;
    return 36;
}

int func679(int var496) {
    if (var496 <= 0) return 1;
    return func679(var496 - 1);
}

int func558(int var45) {
    if (var45 <= 0) return 1;
    return func558(var45 - 1);
}

int func726(int var621) {
    if (var621 <= 0) return 1;
    return 38;
}

int func862(int var329) {
    if (var329 <= 0) return 1;
    return 40;
}


int main() {
    for (int var260 = 0; var260 < 19; var260++) {
        var260 += 3;
    }

    int var63 = 17;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    int var838 = 22;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
