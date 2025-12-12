#include <iostream>
using namespace std;

struct Node {
    char ch;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // 读入一行字符
    string line;
    getline(cin, line);

    // 建立链表
    for (char c : line) {
        Node* newNode = new Node;
        newNode->ch = c;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 读入要查找的字符
    char target;
    cin >> target;

    // 查找位置
    int pos = 1;
    Node* current = head;
    bool found = false;
    string positions = "";

    while (current != nullptr) {
        if (current->ch == target) {
            if (!positions.empty()) {
                positions += ",";
            }
            positions += to_string(pos);
            found = true;
        }
        current = current->next;
        pos++;
    }

    // 输出结果
    cout << "\"";
    Node* p = head;
    while (p != nullptr) {
        cout << p->ch;
        p = p->next;
    }
    cout << "\"";

    if (found) {
        cout << "中有字符" << target << "，位置在";
        cout << positions << "。" << endl;
    } else {
        cout << "中没有字符" << target << "。" << endl;
    }

    // 释放内存
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}