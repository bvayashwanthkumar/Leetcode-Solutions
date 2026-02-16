class MyCircularDeque {
public:
vector<int> arr;
int size=0,front=0,rear=0;
int capacity;
    MyCircularDeque(int k) {
        arr=vector<int>(k);
        capacity=k;
        
    }

    
    bool insertFront(int value) {
        if(isFull())return false;
        if(size==0){
           arr[front]=value;
        }
        else{
        front=(front-1+capacity)%capacity;
        arr[front]=value;
        }
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
         if(size==0){
           arr[rear]=value;
        }
        else{
        rear=(rear+1)%capacity;
        arr[rear]=value;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())return false;
       
       
        if(size>1){
             front=(front+1)%capacity;
        }
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        
       
        if(size>1){
            rear=(rear-1+capacity)%capacity;
        }
        size--;
        return true;
        
    }
    
    int getFront() {
        if(isEmpty())return -1;
        return arr[front];
    }
    
    int getRear() {
        if(isEmpty())return -1;
        return arr[rear];
        
    }
    
    bool isEmpty() {
        if(size==0)return true;
        return false;
    }
    
    bool isFull() {
        if(size==capacity)return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */