#include "../node/node.h"

template <typename T>
class Queue
{
public:
    class Iterator{
    public:
        //give access to list to access _ptr
        friend class Queue;
        //default ctor
        Iterator(){_ptr = NULL;}
        //Point Iterator to where p is pointing to
        Iterator(node<T>* p){}
        //dereference operator
        T operator *(){
            return *_ptr;
        }
        //true if _ptr is NULL
        bool is_null(){
            return false;
        }
        //true if left != right
        friend bool operator !=(const Iterator& left,
                                const Iterator& right)
        {
            return false;
        }
        //true if left == right
        friend bool operator ==(const Iterator& left,
                                const Iterator& right)
        {
            return false;
        }

        //member operator:++it or ++it = new_value
        Iterator& operator++(){
            return *this;
        }

        //friend operator: it++
        friend Iterator operator++(Iterator& it,
                                   int unused){
            return it;
        }

    private:
        node<T>* _ptr;                          //pointer being encapsulated
    };

    Queue(){

    }

    Queue(const Queue<T>& copyMe){

    }
    ~Queue(){

    }
    Queue<T>& operator=(const Queue<T>& RHS){
        return *this;
    }

    bool empty(){
        return false;
    }
    T front(){
        return *_front;
    }
    T back(){
        return *_rear;
    }

    void push(T item){

    }
    T pop(){
        return *_front;
    }

    //Iterator to the head node
    Iterator begin() const{
        return Iterator(_front);
    }
    //Iterator to NULL
    Iterator end() const{
        return Iterator(NULL);
    }
    void print_pointers(){

    }
    int size() const { return _size; }
    template<typename TT>
    friend ostream& operator << (ostream& outs, const Queue<TT>& printMe){
        return outs;
    }
private:
    node<T>* _front;
    node<T>* _rear;
    int _size;
};