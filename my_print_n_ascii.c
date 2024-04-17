void print_char(char c);

void my_print_n_ascii(int a){
    for(int i = 32; i <= a + 32; i++){
        print_char(i);
    }
}
