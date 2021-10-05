#include <iostream>
// Створюємо власну чергу та виключення для нього 
class BasicQueueException : public std::logic_error {
public:
 explicit BasicQueueException(const char* message):std::logic_error(message) {}
  
};
// наслідування від вже побудованого виключення
class EmptyQueueException : public BasicQueueException {
public:
 explicit EmptyQueueException():BasicQueueException("Queue is empty") {}
 const char* what (){
      return "EmptyQueueException";
   }
};

class Queue{

 public:
  bool isEmpty(){ //stub
    return true;
  }
  void pop();
};

// в реалізації черги викликаємо виключення
void Queue::pop() {
  if(isEmpty()) throw EmptyQueueException();
}
// ... Десь в коді можна відловити це виключення
int main(){
    Queue q;
try{
  q.pop();
} 
catch(BasicQueueException& e) {
  std::cerr << "error "<< e.what() << std::endl;
}
}
