void RevertString(char *str) {
    // Находим длину строки
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Переворачиваем строку, меняя символы с начала и конца
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}