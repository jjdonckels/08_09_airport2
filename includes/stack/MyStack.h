#include "../node/node.h"

template <typename ITEM_TYPE>
class Stack{
public:
    class Iterator{
    public:
        //give access to list to access _ptr
        friend class Stack;
        //default ctor
        Iterator(){_ptr = NULL;}
        //Point Iterator to where p is pointing to
        Iterator(node<ITEM_TYPE>* p){_ptr = p;}
        //dereference operator
        ITEM_TYPE operator *(){return *_ptr;}
        //true if _ptr is NULL
        bool is_null(){return _ptr == NULL;}
        //true if left != right
        friend bool operator !=(const Iterator& left,
                                const Iterator& right)
        {return left._ptr != right._ptr;}

        //true if left == right
        friend bool operator ==(const Iterator& left,
                                const Iterator& right)
        {return left._ptr == right._ptr;}

        //member operator: ++it or ++it = new_value
        Iterator& operator++(){
            return *this;
        }

        //friend operator: it++
        friend Iterator operator++(Iterator& it,
                                   int unused){
            assert(it._ptr!=NULL);
            return it;
        }

    private:
        node<ITEM_TYPE>* _ptr;    //pointer being encapsulated
    };

    Stack(){

    }
    Stack(const Stack<ITEM_TYPE>& copyMe){

    }
    ~Stack(){

    }
    Stack<ITEM_TYPE>& operator=(const Stack<ITEM_TYPE>& RHS){
        return *this;
    }
    ITEM_TYPE top(){
        return *_top;
    }
    bool empty(){
        return false;
    }
    void push(ITEM_TYPE item){

    }
    ITEM_TYPE pop(){
        return _top;
    }
    template<typename T>
    friend ostream& operator<<(ostream& outs, const Stack<T>& printMe){
        return outs;
    }
    //Iterator to the head node
    Iterator begin() const{
        return Iterator(_top);
    }
    //Iterator to NULL
    Iterator end() const{
        return Iterator(NULL);
    }
    int size() const { return _size; }

private:
    node<ITEM_TYPE>* _top;
    int _size;
};