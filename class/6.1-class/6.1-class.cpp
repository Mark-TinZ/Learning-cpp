int f(int x) {
    if (x == 0) {
        return 0;
    }
    return f(x - 1) + 1;
}

int g(int x) {
    if (x == 0) {
        return 0;
    }
    return g(x - 1) + g(x - 2) + 2;
}

int h(int x) {
    if (x < 0) {
        return 0;
    }
    return h(x / 2) + 1;
}

int t(unsigned int x) {
    if (x < 0) {
        return 0;
    }
    return t(x - 1) * 2;
}
