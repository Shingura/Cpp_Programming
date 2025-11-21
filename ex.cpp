#include <iostream>
#include <cstring>
using namespace std;

char* insert_string(const char* dest, const char* source, int pos)
{
    size_t dest_len = strlen(dest);
    size_t source_len = strlen(source);
    size_t new_len = dest_len + source_len + 1;
    char* result = new char[new_len];
    strncpy(result, dest, pos);
    strncpy(result + pos, source, source_len);
    strncpy(result + pos + source_len, dest + pos, dest_len - pos);
    result[new_len - 1] = '\0';
    return result;
}

int main()
{
    char arr[100], source[100];
    cin.getline(arr, 100);
    cin.getline(source, 100);
    cin.sync();
    int n;
    cin >> n;
    char* result = insert_string(arr, source, n);
    cout << result << endl;
    delete result;
    return 0;
}