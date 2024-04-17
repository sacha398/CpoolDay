void print_char(char c);

void my_print_revert(char *r){
    int i = 0;
    while (r[i] != '\0')
    {
        i++;
    }
    int j = 0;
    char reverse[i];
    for(int t = i -1; t >= 0; t--){
        reverse[j++] = r[t];
    }
    for(int y = 0; y <= i; y++){
        print_char(reverse[y]);
    }
    
}
