#include <iostream>

//linked list implementation of the queue
using namespace std;
class queueLinked{
private:
    class Node{
    public:
        string data;
        Node* next;
    };
    Node* first;
    Node* last;
public:
    queueLinked() = default;
    bool isEmpty();
    void enqueue(string data);
    string dequeue();
};

bool queueLinked::isEmpty() {
    return first == nullptr;
}

void queueLinked::enqueue(string data) {//queue operation used to an element from the back
Node* old = last;
last = new Node();
last->data = data;
last->next = nullptr;
if (isEmpty()){first = last;}
else {old->next = last;}

}

string queueLinked::dequeue() {//queue operation to remove an element from the from
    string data = first->data;
    first = first->next;
    if (isEmpty()) last = nullptr;
    return data;
}

int main() {
    string m;
    queueLinked q;
    cout <<"Enter any string"<<endl;
    while (getline(cin,m)){
      if (q.isEmpty()) {
          q.enqueue(m);
      }
    }
    cout << q.dequeue();
    return 0;
}
