
#include <stdio.h>


int func926(int var457) {
    if (var457 <= 0) return 1;
    return func926(var457 - 1);
}

int func209(int var648) {
    if (var648 <= 0) return 1;
    return func209(var648 - 1);
}

int func406(int var82) {
    if (var82 <= 0) return 1;
    return 20;
}

int func961(int var475) {
    if (var475 <= 0) return 1;
    return func961(var475 - 1);
}

int func834(int var180) {
    if (var180 <= 0) return 1;
    return func834(var180 - 1);
}

int func66(int var57) {
    if (var57 <= 0) return 1;
    return 48;
}


int main() {
    int var242 = 0;
    while (var242 < 12) {
        var242 += 5;
        var242++;
    }    int var553 = 0;
    while (var553 < 9) {
        var553 += 5;
        var553++;
    }

    int var885 = 33;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    int var824 = 58;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var833 = 32;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
