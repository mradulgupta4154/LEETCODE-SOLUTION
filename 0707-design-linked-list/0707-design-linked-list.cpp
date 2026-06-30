class MyLinkedList {
    struct Node{
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=nullptr;
        }
    };
    Node* head ;
    Node* tail;
    int size;
public: 
    
    MyLinkedList() {
        head=tail=nullptr;
        size= 0 ;
    }
    int get(int index) {
        if(index<0 or index>=size ) return -1;
        Node* temp = head; 
        for(int i = 0 ; i<index ; i++){
            temp = temp->next;
        }
        return temp->data;
    }
    void addAtHead(int val) {
        Node* newNode =new Node(val);
        if(head==nullptr){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }   
        size++;
    }
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next = newNode;
            tail=newNode;
        }
        size++;
    }
    void addAtIndex(int index, int val) {
        if (index > size) return;          // invalid position
        if (index <= 0) { addAtHead(val); return; }
        if (index == size) { addAtTail(val); return; }

        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        Node* toDelete;
        if (index == 0) {
            toDelete = head;
            head = head->next;
            if (head == nullptr) tail = nullptr; 
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            toDelete = temp->next;
            temp->next = toDelete->next;
            if (toDelete == tail) tail = temp;
        }
        delete toDelete;
        size--;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */