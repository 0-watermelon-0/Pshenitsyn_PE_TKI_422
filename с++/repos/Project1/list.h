
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    // ������� ���������� ��������
    void insertNode(int data); 

    // ������� �������� ��������
    void deleteNode(int data);

    // ������� ���������� ������
    void sortList(); 

    // ������� ������ ������
    void displayList();

private:
    Node* head;
    Node* tail;
};


