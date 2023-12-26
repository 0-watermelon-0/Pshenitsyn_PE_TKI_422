
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    // add element function  (���������� ��������)
    void insertNode(int data); 

    // element removal function  (�������� ��������)
    void deleteNode(int data);

    // list sort function (���������� ������)
    void sortList(); 

    // list function (������ ������)
    void displayList();

private:
    Node* head;
    Node* tail;
};


