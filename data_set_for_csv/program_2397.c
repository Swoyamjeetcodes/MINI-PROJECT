
#include <stdio.h>


int func329(int var377) {
    if (var377 <= 0) return 1;
    return 19;
}

int func186(int var828) {
    if (var828 <= 0) return 1;
    return 42;
}

int func1(int var860) {
    if (var860 <= 0) return 1;
    return 58;
}

int func462(int var770) {
    if (var770 <= 0) return 1;
    return func462(var770 - 1);
}

int func842(int var188) {
    if (var188 <= 0) return 1;
    return func842(var188 - 1);
}

int func614(int var856) {
    if (var856 <= 0) return 1;
    return func614(var856 - 1);
}


int main() {
    int var245 = 0;
    while (var245 < 6) {
        var245 += 2;
        var245++;
    }    int var980 = 0;
    while (var980 < 19) {
        var980 += 1;
        var980++;
    }

    int var720 = 94;
    if (var720 % 2 == 0) {
        printf("var720 is even\n");
    } else {
        printf("var720 is odd\n");
    }

    return 0;
}
