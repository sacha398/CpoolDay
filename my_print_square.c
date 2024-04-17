void print_char(char c);

void my_print_square(int size, char c){
    if(size > 0){
        for(int i = 0; i < size; i++) print_char(c);
    }
}