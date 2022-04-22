float fatorial(float input) {
    float fat = 1;
    for(fat = 1; input > 1; input = input - 1) {
        fat = fat * input;
    }
    
    return fat;
}