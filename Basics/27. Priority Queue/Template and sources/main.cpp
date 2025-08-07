// https://www.programiz.com/cpp-programming/priority-queue

// Insert Element to a Priority Queue


#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a queue of int
  priority_queue<int> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  cout << "Priority Queue: ";

  // display all elements of numbers
  while(!numbers.empty()) {
    cout << numbers.top() << ", ";   
    numbers.pop();
  }

  cout << endl;

  return 0;
}




// Remove element from the Priority Queue

#include<iostream>
#include <queue>
using namespace std;

// function prototype for display_priority_queue()
void display_priority_queue(priority_queue<int> pq); 

int main() {

  // create a queue of int
  priority_queue<int> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);
 
  cout << "Initial Priority Queue: ";
  display_priority_queue(numbers);
  
  // remove element from queue
  numbers.pop();
  
  cout << "Final Priority Queue: ";
  display_priority_queue(numbers);

  return 0;
}

// utility function to dislay priority queue
void display_priority_queue(priority_queue<int> pq) {
  while(!pq.empty()) {
    cout << pq.top() << ", ";   
    pq.pop();
  }

  cout << endl;
}




// Access Element from the Priority Queue


#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of int
  priority_queue<int> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  // get the element at the top
  int top = numbers.top();
  cout << "Top element: " << top;

  return 0;
}



// Get the size of the Priority Queue

#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of string
  priority_queue<string> languages;

  // add items to priority_queue
  languages.push("C++");
  languages.push("Python");
  languages.push("Java");

  // get the size of queue
  int size = languages.size();
  cout << "Size of the queue: " << size;

  return 0;
}




// Check if the Priority Queue is Empty



#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of ints
  priority_queue<string> languages;

  cout << "Is the queue empty? ";

  // check if the queue is empty  
  if (languages.empty()) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  cout << "Pushing elements..." << endl;

  // push element into the queue
  languages.push("Python");
  languages.push("C++");
  languages.push("Java");

  cout << "Is the queue empty? ";

  // check if the queue is empty
  if (languages.empty()) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }

  return 0;
}



// Min-Heap Priority Queue



#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of int
  // arranges elements in ascending order
  priority_queue<int, vector<int>, greater<int>> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  // print element with highest priority
  cout << "Top element: " << numbers.top();

  return 0;
}