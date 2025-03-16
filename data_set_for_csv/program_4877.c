
#include <stdio.h>


int func523(int var241) {
    if (var241 <= 0) return 1;
    return 75;
}

int func315(int var783) {
    if (var783 <= 0) return 1;
    return func315(var783 - 1);
}

int func879(int var900) {
    if (var900 <= 0) return 1;
    return func879(var900 - 1);
}

int func439(int var722) {
    if (var722 <= 0) return 1;
    return 78;
}

int func445(int var834) {
    if (var834 <= 0) return 1;
    return func445(var834 - 1);
}

int func941(int var339) {
    if (var339 <= 0) return 1;
    return func941(var339 - 1);
}

int func685(int var355) {
    if (var355 <= 0) return 1;
    return func685(var355 - 1);
}


int main() {
    for (int var795 = 0; var795 < 16; var795++) {
        var795 += 1;
    }    for (int var218 = 0; var218 < 11; var218++) {
        var218 += 5;
    }    int var899 = 0;
    while (var899 < 6) {
        var899 += 1;
        var899++;
    }

    int var245 = 18;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    int var752 = 43;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    return 0;
}
