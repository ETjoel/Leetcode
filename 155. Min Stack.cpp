
class MinStack {
public:
    int _val, l1;//, l2;
    MinStack* _top;
    MinStack* next;
    MinStack() {
        _top = NULL;
    }
    
    void push(int val) {
        MinStack* new_node = new MinStack();
        new_node -> _val = val;
        if(_top == NULL){
            new_node -> next = NULL;
            _top = new_node;
            //l1 = _top -> _val;
            //l2 =l1;
            }
    
        else {
            new_node -> next = _top;
             _top = new_node;
            /*if(l1 >= new_node -> _val){
                l2 = l1;
                l1 = new_node -> _val;
            }*/
        }
        
    }
    
    void pop() {
        MinStack* new_node = new MinStack();
        if(_top == NULL){
            return;
        }
        new_node = _top;
        /*if(l1 == _top -> _val){
            l1 = l2;
        }*/
        _top = _top -> next;
        delete(new_node);
    }
    
    int top() { 
       return _top -> _val;
    }
    
    int getMin() {
        l1 = _top -> _val;
        MinStack* temp = _top;
        while(temp != NULL){
            if(l1 > temp -> _val){
                l1 = temp -> _val;
            }
            temp = temp -> next;
        }
        return l1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
