int main() { 
    int x = 10; 
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d\n", x); 
    return 0; 
}
/*This solution addresses the issue by ensuring the pointer arithmetic is valid and the memory access is within bounds. It provides a clear and concise example of how to handle pointers correctly.*/