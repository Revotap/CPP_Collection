/*
    Author: Leon Grell
    Description:
        Collection of different methods created through time at university
*/

/*Returns the biggest value of array a[] where n is size of array*/
int max(int array[], size_t size) {
    int biggest_value = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > biggest_value) {
            biggest_value = array[i];
        }
    }
    return biggest_value;
}

/*
    This function starts comparing the first character of each string. If they are equal to each other,
    it continues with the following pairs until the characters differ or until a terminating null-character
    is reached.
    
    Return values:
    <0  : 	the first character that does not match has a lower value in s than in t
    0   :	the contents of both strings are equal
    >0  :   the first character that does not match has a greater value in s than in t
*/
int strcompare(char* s, char* t) {
    char tmp = 0;
    while (*s != '\0' && *t != '\0') {
        tmp = *s - *t;
        if ((int)tmp != 0) {
            break;
        }
        s++;
        t++;
    }
    return (int)tmp;
}

/*
	Iteratre through string and give back the length
*/
size_t strlength(char* str) {
    size_t len = 0;
    while (str[len]){
		len++;
	}
    return len;
}

/*
	Returns a pointer to the first appearance of char c in str. When the character is not present return a Nullpointer
*/
char* charInString(char* str, char c) {
    size_t len = 0;
    while (str[len]) {
        if (str[len] == c) {
            return &str[len];
        }
        len++;
    }
    return nullptr;
}