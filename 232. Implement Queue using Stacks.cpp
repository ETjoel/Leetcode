class MyQueue {
public:
    int _val;
    MyQueue* next;
    MyQueue* head;
    MyQueue* tail;
    MyQueue() {
        head = NULL;
        tail = NULL;
    }
    
    void push(int x) {
        MyQueue* new_node = new MyQueue();
        new_node -> _val = x;
        new_node -> next = NULL;
        if(head == NULL){
            head = new_node;
            tail = new_node;
        }
        else{
            tail -> next = new_node;
            tail = new_node;
        }
    }
    
    int pop() {
        int poped;
        MyQueue* new_node = new MyQueue();
        if(head != NULL){
        poped = head -> _val;
        new_node = head;
        head = head -> next;
        delete(new_node);
        }
        return poped;
    }
    
    int peek() {
        return head -> _val;
    }
    
    bool empty() {
        if(head == NULL){
            return true;
        }
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
