int minimumDeletions(char* s) {
    int a_total = 0, b = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a')
            a_total++;
    }
    int ans = INT_MAX;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a')
            a_total--;
        ans = fmin(ans, a_total + b);
        if (s[i] == 'b')
            b++;
    }
    return ans;
}
