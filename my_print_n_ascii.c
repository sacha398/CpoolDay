void print_char(char c);

void my_print_n_ascii(int a){
    for(int i = 33; i <= a + 33; i++){
        print_char(i);
    }
}