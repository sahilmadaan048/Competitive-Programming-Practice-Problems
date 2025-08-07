//c++ stl

// a set of tools available in c++ proh paltforms
// code qyuickly efficiently and in generic e=way


/**
 * 
 * basic c++ prog experiesns
 * 
 * 
 * knowledge of templates
 *
 * an ide
 * 
 * data types are not specifies in implementation, but rather in its use (generic paradig,)
 * 
 * compile time polymorphism
 * 
 * c++ emnavles generuic programmng by means if special constricyors called remplates
 * 
 * 
 * temp;aye<typename t>
 * T area(T a, t b){
 * t result = a*b'
 * ;return resilt
 * }
 * 
 * 
 * 
 * containers =>array like data structures that stire collecto=ion of objects
 * 
 * iterators =>pointers like objects wjich allow traversal of containers
 * 
 * algorithms =>these are set of functions that are implemented in an efficient manner for diff operations like search, sort, modify,, cout , <algorithm> 
 * 
 * functions(function objects) =>clases whichoverload the () parentesis operators such that they can be used as functions
 * 
 * <functional>
 * 
 * */


#include<bits/stdc++.h>
using namespace std;

template <typename T>
T area(T a, T b){
	T result = a*b;
	return result;
}

int main() {	
	int x = area<int>(4, 5.50);
	double y = area<double>(10, 202.23);
	float z = area<float>(10.5, 5);
	cout << x << ", " << y << ", " << x << endl;\
	return 0;
}	



/**
 * CONTAINERS
 * 
 * objects that handle a collection of other subhects
 * (elements) implementing a well-defined data structre
 * 
 * 
 * example-> vectors, stacks, queue, maps, pairs
 * 
 * 
 * classification of containers
 * 
 * 1. Sequence ->storage of data elemets is done in these containers  vectors atcsks queue list deque arrau
 * 		we use index here
 * 2. Associative =>that implemeny associated arays->         <i>ordered
 *  	we use key value pairs here	                          <ii>unordered
 * 		ordered are implemented using binary search tree (inorderd ->sorted)
 * 		n elements height = log n => o(log n) time
 * 		ordered ->set, map(no duplicate keys) , multiset, multimap
 * 
 * 
 * 		unordered -> we use hash table in the implementation
 * 					the time is o(1);
 * 					uhnordered_(set, mop, multimap, multiset)
 * 	
 * 
 * 
 * VECTOR 
 * 
 * 
 * dynamic size array
 * vector<int> v;   =>size and capacity
 * allow acces of random memners in vectors
 * 
 * LIST
 * 
 * DOUBL YLINKED LIST
 * 
 * prv amd next pounter
 * does not allow random access of rhe elements unlike vectoprs
 * aniother version of list
 * 		=>forward list(implmentation og singly linked list)
 * 
 * 
 * 
 * DEQUE  -> double ended queue
 * 
 * 
 * CONTAINER ADAPTERS
 * 
 * ->interfaces that implement special functionality on top pop of squence cotainers
 * 
 * ->stack
 * 
 * ->queue
 * 
 * ->priority queue =>heap
 * 
 * 
 * 
 * SET /unordered set
 * 
 * model of mathematical set: {x1, x2, x3, x4}
 * collection of unique elements that sebver as keys
 * 
 * 
 * MULYISETS ->duplicate keys allowed
 * 
 * //set of pairs : {(k1, v1), (k2,v2), (k3, v3)...}
 * ***/




/**
 * ITERATORS
 * 
 * 
 * objects that enable traversal of containenrs in som eorder for either reading or writing
 * 
 * 
 * iterators are definesd ad templates and must comply with a very specific set of rules in order
 * to qualig=fy as one or many types of iteratprs
 * 
 * 
 * ->pointers are one particulat type of iterators
 * 
 * ARE Pointers and Iteratos the same thing?
 * 
 * ->No
 * 
 * ->pointers are variables that can be indirected to refer to a memory location
 * 
 * =>iterator is a higher abstraction for elements used tp 
 * traverse comtainers, whereas pointera and integers are special type of
 * iteraators,  not suitable for wvery containers
 * 
 * 
 * TYPES OF ITEARTOS
 * 
 * 1. inout iterator
 * 2. output iterator
 * 3. forward iterator
 * 4. bidirenctional iteartor
 * 5. random access iterator
 * 
 * all containers requires their iteratoes to comply with rthe capabilities
 * of some of these types some are rather relaxed and some are more rigorous
 * 
 * 
 * 
 * INPUT ITERATOR
 *
 * 
 * ->only able to read (only accessing, not assigning)
 * ->only moves forward
 * ->can be incremented(++it , it++, .....)
 * ->only one pass possible
 * ->least requirement supported bby STL
 * ->suitable for input streams, such as keyboard buffers or read only files
 * 
 * 
 * 
 * OUTPUT ITERATOR
 * 
 * ->only able to write
 * ->only oves forward
 * ->only one pass possinle
 * ->least requirement supported by stl
 * ->suitabkle for output streams, such as screen text or write only files
 * 
 * 
 * 
 * FORWARD ITERATOR
 * 
 * 
 * ->it has requirements of bith the inout and the output iterator
 * ->able to read and write
 * ->only moves forward
 * ->supports multiple passes if container
 * ->suitable for traversing singly linked list
 * 0>still can't do it--
 * 
 * 
 * BIDIRENCTIONAL ITERATPR
 * 
 * ->all capaivlities o forward iterators + backward traversal
 * ->suitable for doubly linked list
 * 
 * 
 * RANDOM ACCESS ITERATOR
 * 
 * ->all capabilities of bidirectional iterators + random access by means og indexing
 * ->suitable for vectors and similar containers(ex-> array)
 * 
 * 
 * 
 * **/





/***
 * ITERATOR FUNCTIONS IN C++ STL
 * 
 * begin()
 * ```````
 * 
 * ->returns iterator to the beginning of the container
 * 	it = v.begin();
 *	 *it = v[0] => dereferencing
 * 
 * 
 * end()
 * `````
 * 
 * ->returns an iterator to the element following the last element of the container
 * ->this element acts as a placeholder; attempting to access it results in undefined behavious
 * 
 * 
 * rbegin()
 * ````````
 * 
 * ->returns iterator to the ladt element o the container
 * 
 * 
 * rend()
 * ```````
 * 
 * ->returens a reverse iterator pointing to the theorectical element right before the first element in the array coontainer
 * 
 * 
 * 
 * **/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	cout << *v.begin() << "\n";
	cout << *v.end() << "\n";
	cout << *v.rbegin() << "\n";
	cout << *v.rend() << "\n";

	return
}



/***
 * ITERATOR INVALIDATION IN C++ STL
 * 
 * ->due to update (indert/ delete) of container that os using iteartors
 * ->no runtime error bit iteratoe no longer guaranteed to have access to the same element after update
 * ->well documented rules
 * ->depends on container implementation
 * 
 * 
 *
 * */


#include<vector>
using namespace std;

int main() {
	vector<int> v = {1,2,3,4,5,6,7};
	
	auto it = v.begin()+4;
	cout << *it << endl;
	cout << it-v.begin() << endl;

	v.insert(it, 100);  //1 2 3 4 100 5 6 7
	cout << *it << endl;
	cout << it - v.begin() << endl; 

	return 0;
}



/***
 * C++STL = VECTORS
 * 
 * ->elements are stored contiguously
 * ->storage of vector is automatically, being expanded and contracted as needed
 * ->vectors usually occupy more space then static arrays because more memory is allocated to handle future growth
 * 
 * size(), capacity(), max_size()
 * = [] at()
 * front() back()
 * shrink_to_fit()
 * empty()
 * begin() end() rbegin() rend(
 * insert() erase()
 * push_back pop_back
 * 
 * b.insert(v.begin (), it1, it2 )
 * 
 * **/

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
	vector<int> v = {1, 2, 3};
	cout << v.size() << " " << v.capacity() << endl;
	cout << v.max_size() << endl;
	v.push_back(4);
	cout << v.size() << " " << v.capacity() << endl;
	int cap = v.capacity();
	for(int i=0; i<100; i++) {
		v.push_back(i);
		if(cap != v.capacity()){
			cap = v.capacity();
			cout << v.capacity() << endl;
		}
	}
	cout << v[104] << endl;
	cout << v.at(104) << endl; //will give error if not present
	cout << v.front() << " " << v.back() << endl;
	v.insert(v.begin()+2, -100);
	cout << v[2] << endl;
	cout << v.size() << endl;
	v.pop_back();
	cout << v.size() << endl;
	list<int> ll = {100, -200, 400};

	v.insert(v.begin(), ll.begin(), ll.end());

	cout << v[0] << v[1] << endl;
	v.pop_back();
	v.erase(v.begin()+1);
	cout << v[0] << v[1] << endl;

	v.erase(v.begin() +1, v.begin()+2);
	cout << v.size() << endl;

	return 0 ;
}



/***
 * C++ STL -> LIST
 * 
 * 
 * 
 * ->sequence containers, optimmised for rapid insert and delete operations
 * ->elemets arer stored non-contiguously
 * ->diesn;t support random access
 * ->bidirectional iterations (1 dirn for std::forward list)
 * 
 * 
 * 
 * 
 * LIST FUNCTIONS
 * 
 * 
 * 
 * size()  max_size()
 * =
 * front() back()
 * empty()
 * begin() end() rbegin() rend()
 * insert() erase() remove() 
 * clear()
 * push_back() po_back() push_front() pop_front()
 * 
 * 
 * **/


#include<iostream>
#include<vector>
#include<list>

using namespace std;

void print_list(list<int> &ll){
	for(list<int>::iterator it= ll.begin(); it != ll.end(); it++){
		cout << *it << "\t";
	}
	cout << "\n";
}

int main() {
	list<int> nums = {1,2,3,4,5};
	print_list(nums);
	cout << nums.size() ;
	list<int> nums2 = nums;
	print_list(nums2);

	cout << nums.front() << nums.back() << endl;
	cout << std::boolalpha << nums.empty() << endl;

	cout << *nums.begin() << " " << *nums.rbegin() << endl;

	cout << vector<int> vec = {1,2,3,4,5,6};
	vec.insert(vec.begin()+2, 100);
	cout << vec[2] << endl;

	// nums.insert(nums.begin()+2, 100);   wrong method
	print_list(nums);
	list<int>::iterator it = nums.begin();
	while(*it != 3 and it != nums.end()){
		it++;
	}
	nums.insert(it, 100);
	print_list(nums);

	nums.erase(it);
	print_list(nums);

	nums.remove(4);
	print_list(nums);

	nums.clear();
	print_list(nums);

	nums2.push_back(100);
	nums2.push_front(200);
	print_list(nums2);

	nums2.pop_back();
	nums2.pop_front();
	print_list(nums2);

	return 0 ;
}

/****
 * DEQUE -C++ STL
 * 
 * 
 * ->sequence containers, supports push/pop from both ends
 * ->supporots random access
 * ->need to inclide <deque> header file
 * ->elements are not stored contiguously, typical implementatiosn
 * 	fixed-size arrays, with additional bookkeeping
 * 
 * 
 * DEQUE FUNCTIONS
 * 
 * size()
 * = []
 * front() back()
 * empty()
 * begin() end() rbegin() rend()
 * insert() erase()
 * claer()
 * push_back(), push_frint() pop_back() pop_+front()
 * 
  * 
 */

#include<bits/stdc++.h>
#include<deque>
#include<vector>
using namespace std;

int main() {

	deque<int> d = {1,2,3,4,5};
	cout << d.size() << endl;
	cout << d[2] << endl;
	cout << d.front() << " " << d.end() << endl;
	for(deque<int>::iterator it = d.begin(); it!= d.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;

	d.push_back(100);
	d.push_front(200);

	d.pop_back();
	d.pop_front();
	for(deque<int>::iterator it = d.begin(); it!= d.end(); ++it){
		cout << *it << " ";
	}
	d.clear();
	for(deque<int>::iterator it = d.begin(); it!= d.end(); ++it){
		cout << *it << " ";
	}
	return 0;
}


/***
 * STACK - C++ STL
 * 
 * 
 * ->container adapter with the fucntionality of a stack
 * ->need to include<stack< header file
 * ->the class temolate acts as a wrapper to the underlying container only a specific set of functions is proved
 * ->pushes and pops selement from one end of underlyinf container(top of the stack)
 * 
 *  
 * 
 * STACK FUNCTIONS
 * 
 * size()
 * =
 * top()
 * empty()
 * push()
 * pop()
 * 
 * */

#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<int> s;
	for(int i=0; i<5; i++){
		s.push(i);
	}
	cout << s.size() << s.top() << endl;
	s.pop();
	s.pop();
	xout << s.size() << s.top() << endl;

	if(s.empty()) cout << "empty" << endl;
	else cout << "not empty" << endl;
	return 0;
}

/***
 * QUEUE ->c++ stl (first in first out)
 * 
 * 
 * underlyinf conntainer is deque
 *                          ``````
 * 
 * ->container adapter with the functionality of a queue
 * ->need to include<queue< header file
 * ->the class template acts as a wrapper to the underlying container-> only a specific
 * 	set of functions is providded
 * ->pushes elements at one end(front) ans pops from the other end(back) of underlying container
 * 
 * 
 * 
 * 
 * QUEUE FUNCTIONS
 * 
 * size()
 * =
 * front() back()
 * empty()
 * push() pop()
 * 
 * */

#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> q;
	cout << std::boolalpha << q.empty() << endl;
	for(int i=0; i<=5; i++) q.push(i);
	cout << q.size() << q.front() << endl;
	q.pop();
	q.pop();
	cout << q.size() << q.front() << endl;

	if(q.empty()) cout << "empty" << endl;
	else cout << "not empty" << endl;
	return 0;
}

/***
 * 
 * PRIORITY QUEUE -C++ STL
 * 
 * ->container adapter that provides conrtant time lookup of the target (by default) elemnt at the expendse of lofarithmic insertion and extraction
 * ->need to include<queue> header file
 * ->a user provided compare can be applied to change the ordering
 * 
 * 
 *
 * 
 ***/

 template<
  	class T,
  	class Container  = std::vector<T>,
  	class Compare = std::less<typename Container::value_type>
 > class priority_queue;

/* *********************************************************
 * KNOWLEDGE CENTER
 * st::priority_queue
 * Detailed Video Explanation: https://youtu.be/WhIcVlkZ19s
********************************************************** */




/**Container
 * 
 * the type of the underlying container to use to store the elements
 * 
 * must satisfy the requirements of thw sequence containers and the iterators that satisfy the requiremtnnts of the leagacy random aceesss iteratpr
 * 
 * additionally it must provide the following functions with the usual semantics front() push_back() pop_back()
 * 
 * 
 * std::vector and std::deque satisfy these requirements
 * 
 * 
 * 
 * //we can define our own comparator
 * 
 * 
 * COMPARE
 * 
 * a compare type providing a strict weak ordering
 * 
 * compare parameter us defined such that it returns true if its first argument comes before its second argument ina  weak ordering
 * 
 * 
 * queue FUNCTIONS
 * 
 * size()
 * =
 * top()
 * empty()
 * push()
 * pop()
 * 
 * 
 * 
 * 
 * **/

 #include <iostream>
#include <queue>
#include <vector>

using namespace std;


class Student{
    int age;
    int id;
    // -- TODO
};

int main() {
    
    // priority_queue<int> Q;
    // vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    // for(int x : v) Q.push(x);
    // while(!Q.empty()){
    //     cout << Q.top() << " ";
    //     Q.pop();
    // }
    // cout << endl;
    

    // defualt is std::less -> desending order
    
    priority_queue<int, vector<int>, std::greater<int>> Q;
    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    for(int x : v) Q.push(x);
    while(!Q.empty()){
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl;
    
    
    auto cmp = [](int a, int b){
        return a > b;
    }; //descecnifn orde mei hoga
    
    priority_queue<int, vector<int>, decltype(cmp)> Q(cmp);
    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    for(int x : v) Q.push(x);
    while(!Q.empty()){
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl;

    return 0;
}


/**
 * an associate contauner the=at contains a sorted set if unique objects of type key
 * 
 * 
 * need ti include<set> geader file
 * 
 * a user provided compare can be supplied to change the ordeting(sorinh)
 * 
 * search removal and insetion times are logarithmic
 * 
 * usually implemented as RB(red and black) Trees
 * 					     `````````
 * 
 * SET FUNCTIONS
 * 
 * size()
 * -
 * clear()
 * 				
 * count() find()
 * 
 * empty()
 * 
 * insert(key) insert(it1, ut2)  insert(init_list)  (initialiser list)
 * 
 * erse(it) erase(it1, it2) erase(key)
 * 
 * upper_bound(key) lowet_bound(key)
 * 
 * 
 * 
 * INSERT()
 * 
 * 1.insert(key)
 * 		*inserts key
 * 		*returns pair consisting of iterator to inserted element (or element presrnt)
 * 		*ans bool set to true if insertion took place
 * 2.insert(iterator pos1, iterator pos2)
 * 		*inserts elements in range (pos1, pos2)
 * 		*returns nothing (void)
 * 3.insert(initisloaser liist)
 * 		*inserts elements from initialiser liist
 * 		*return nithiung (void)
 * 
 * 
 * 
 * same for ERASE
 * 
 * erase(iterator pos)
 * 
 * erase(iterator pos1, ietrator pos2)
 * 
 * erase (key)
 * 
 * */
template<
	class key, 
	class Comapre = std::less<key>,
	class Allocator = std::allocator<key>,
	> class set;


/* *********************************************************
 * KNOWLEDGE CENTER
 * std::set
 * Detailed Video Explanation: https://youtu.be/2OEnAdl1eLc
********************************************************** */


#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Student{
public:
    int id;
    string name;
    
    void print_student() const {
        cout << "[ name = " << name << ", id = " << id << "]\n";
    }
    
    bool operator < (const Student& other) const {
        return (this->id > other.id);  //for ascending order sort
    }
};

int main() {
    set<int> s = {10, 20, 5, 10, 15, 20, 4};
    cout << "size = " << s.size() << endl;
    s.insert(100);
    s.insert(10);
    cout << "size = " << s.size() << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //auto it = s.erase(s.find(10));
    //cout << *it << endl;
    int num_erased = s.erase(10);
    cout << "num_erased = " << num_erased << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    auto ub = s.upper_bound(10);
    auto lb = s.lower_bound(10);
    cout << "ub = " << *ub << endl;
    cout << "lb = " << *lb << endl;
    
    s.insert({-10, -30, -20});
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    vector<int> v = {10, 20, 15, 5, 4};
    s.insert(v.begin(), v.end());
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //------------
    set<Student> sst = {{50, "Simon"}, {20, "Thomas"}};
    for(auto& st: sst)
        st.print_student();
    

    return 0;
}


/**
 * MULTISET - C++ STL
 * 
 * an associative container that contains a sorted l=setr of unique onbjects of type key
 * 
 * need to include<Set> header file
 * 
 * a user defined compare can be supplied to change thr ordering(sorting)
 * 
 * search, removal, and insertion times are logarithmic
 * 
 * usually implemented as RB trees
 *
 * 
 * 
 * MULTISET FUNCTIONS
 * 
 * 
 * size()
 * =
 * clear()
 * count()
 * find()
 * emmpty()
 * insert(key) insert(it1, it2) insert(init_list)
 * erase() erase..........
 * upper_bound(key)
 * lower_bound(key)
 * contains()
 * 
 * Here's the text extracted from the image:

---

**insert(Key key)**  
- Inserts key (if present insert at upper_bound())  
- Returns iterator to inserted element  

**insert(iterator pos1, iterator pos2)**  
- Inserts elements in range [pos1, pos2)  
- Returns nothing (void)  

**insert(initializer_list l)**  
- Inserts elements from initializer list  
- Returns nothing (void)  

--- 

If you need further assistance or clarification, feel free to ask!
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Here's the text extracted from the image:

---

**Erase()**

**erase(iterator pos)**
- Removes element at position `pos`
- Returns iterator following last element removed

**erase(iterator pos1, iterator pos2)**
- Removes elements in range [pos1, pos2)
- Returns iterator following last element removed

**erase(key)**
- Removes all elements with Key (if present) `key`
- Returns number of elements removed

---

If you need any further assistance, let me know!







 * **/

template<
	class key,
	class compare = std::less<keyS>,
	class allocator = std::allocator<key>,
	> class multiset;



/* *********************************************************
 * KNOWLEDGE CENTER
 * st::multiset
 * Detailed Video Explanation: https://youtu.be/iJCnqHrkPq8
********************************************************** */


#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Student{
public:
    int id;
    string name;
    
    void print_student() const {
        cout << "[ name = " << name << ", id = " << id << "]\n";
    }
    
    bool operator < (const Student& other) const {
        return (this->id < other.id);
    }
};

int main() {
    multiset<int> s = {10, 20, 5, 10, 15, 20, 4};
    cout << "size = " << s.size() << endl;
    s.insert(100);
    s.insert(10);
    cout << "size = " << s.size() << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //auto it = s.erase(s.find(10));
    //cout << *it << endl;
    int num_erased = s.erase(10);
    cout << "num_erased = " << num_erased << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    auto ub = s.upper_bound(10);
    auto lb = s.lower_bound(10);
    cout << "ub = " << *ub << endl;
    cout << "lb = " << *lb << endl;
    
    s.insert({-10, -30, -20});
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    vector<int> v = {10, 20, 15, 5, 4};
    s.insert(v.begin(), v.end());
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //------------
    multiset<Student> sst = {{50, "Simon"}, {20, "Thomas"}, {50, "Simon_Junior"}};
    for(auto& st: sst)
        st.print_student();
    
    return 0;
}


/**
 *UNORDERED-SET -> C++ STL
 * 
 * an associative conainer that contains a set of unique objects of type key
 * 
 * need to include <unordered_set> header file
 * 
 * search, removal. and insertion times are constant
 * 
 * implemented as hash table
 *
 * 
 * 
 * FUNCTIONS
 * 
 * 
 * size()
 * =
 * clear()
 * count()
 * find()
 * empty()
 * insert()...
 * erase().....
 * bucket_count(), load_factor()...
 * 
 * 
 * 
 * 
 * 
 * 
 * INSERRT()
 * 
 * insert(key key)
 * 	*inserts key(if not present)
 * 	*return spair iterator to inserted (present) element and bool denotinf if insertion took pkace
 * 
 * insert(iterator pos1, iterator pos2)
 * 	*inserts elements in range (pos1, pos2);
 * 	*return s nothing(void)'
 * 
 * insert(initialiser_init'
 * 	*insrts elements fromm initialiser list
 * 	*returns nothing (void)
 * 
 * 
 * ERASE()
 * 
 * erase(iterator pos)
 * 	*removes element at position pos
 * 	*returns iterator following last element removed
 * 
 * erase(iterator pos1, iterator pos2)
 * 	*removes elelements in range [pos1, pos2)
 * 	*removes iterator following last element removed
 * 
 * erase(key)
 * 	*removes element with key if(present) key
 * 	*returns number of elements removed
 * 	
 * 
 * */

template<
	class key,
	class hash = std::hash(key),
	class keyequal = std::equal_to<key>
	class allocator = std::allocator<key>,
	> class unordered_set;

/* *********************************************************
 * KNOWLEDGE CENTER
 * st::unordered_set
 * Detailed Video Explanation: https://youtu.be/g5RGA50LGCA
********************************************************** */

#include <iostream>
#include <functional>
#include <unordered_set>

using namespace std;

class Student{
public:
  int id;
  string name;

  bool operator==(const Student& s) const{
    return (this->id == s.id && this->name == s.name);
  }

  void print_student() const {
    cout << "[ id = " << id << ", name = " << name << "]\n";
  }

};

class StudentHashFunction{
public:
  size_t operator()(const Student& s) const{
    return (hash<int>{}(s.id) + hash<string>{}(s.name));
  }
};

int main(){

  
  size_t h1 = hash<string>{}("hello");
  size_t h2 = hash<string>{}("World");
  cout << h1 << ", " << h2 << endl;
  cout << hash<int>{}(100) << endl;
  cout << hash<float>{}(100.5) << endl;
  

  unordered_set<int> us = {5, 10, 4, 20, 5, 5, 15};
  for(int x: us)
    cout << x << " ";
  cout << endl;

  cout << "size = " << us.size() << endl;
  cout << "count(5) = " << us.count(5) << endl;
  cout << "num erased(5) " << us.erase(5) << endl;
  cout << boolalpha << "found 16 = " << (us.find(16) != us.end()) << endl;
  cout << "num buckets = " << us.bucket_count() << endl;
  cout << "load factor = " << us.load_factor() << endl;

  unordered_set<Student, StudentHashFunction> uss = {{50, "Simon"}, {20, "Thomas"}};
  for(auto& st: uss)
    st.print_student();


    return 0;
}



/**
 * UNORDERED-MULTISET - C++ STL
 * 
 * 
 * an associative container that contains a set of non unique objects of type key
 * 
 * need to include <unordered_set> header file
 * 
 * search, removal, and insertion times are constant(avg)
 * 
 * impllemented as hash table
 * 
 * 
 * 
 * * FUNCTIONS
 * 
 * 
 * size()
 * =
 * clear()
 * count()
 * find()
 * equal_range()  
 * empty()
 * insert()...
 * erase().....
 * bucket_count(), load_factor()...
 * 
 * 
 * 
 * 
 *  * 
 * INSERRT()
 * 
 * insert(key key)
 * 	*inserts key(if not present)
 * 	*return spair iterator to inserted (present) element and bool denotinf if insertion took pkace
 * 
 * insert(iterator pos1, iterator pos2)
 * 	*inserts elements in range (pos1, pos2);
 * 	*return s nothing(void)'
 * 
 * insert(initialiser_init'
 * 	*insrts elements fromm initialiser list
 * 	*returns nothing (void)
 * 
 * 
 * 
 *  * ERASE()
 * 
 * erase(iterator pos)
 * 	*removes element at position pos
 * 	*returns iterator following last element removed
 * 
 * erase(iterator pos1, iterator pos2)
 * 	*removes elelements in range [pos1, pos2)
 * 	*removes iterator following last element removed
 * 
 * erase(key)
 * 	*removes element with key if(present) key
 * 	*returns number of elements removed
 * 
 * */

/* *********************************************************
 * KNOWLEDGE CENTER
 * st::unordered_multiset
 * Detailed Video Explanation: https://youtu.be/AdCryKn9T9o
********************************************************** */


#include <iostream>
#include <functional>
#include <unordered_set>

using namespace std;

class Student{
public:
  int id;
  string name;

  bool operator==(const Student& s) const{
    return (this->id == s.id && this->name == s.name);
  }

  void print_student() const {
    cout << "[ id = " << id << ", name = " << name << "]\n";
  }

};

class StudentHashFunction{
public:
  size_t operator()(const Student& s) const{
    return (hash<int>{}(s.id) + hash<string>{}(s.name));
  }
};

int main(){

  unordered_multiset<int> us = {5, 10, 4, 20, 5, 5, 15};
  for(int x: us)
    cout << x << " ";
  cout << endl;

  auto its = us.equal_range(5);
  for(auto it = its.first; it != its.second; ++it)
    cout << *it << " ";
  cout << endl;

  cout << "size = " << us.size() << endl;
  cout << "count(5) = " << us.count(5) << endl;
  cout << "num erased(5) " << us.erase(5) << endl;
  cout << boolalpha << "found 16 = " << (us.find(16) != us.end()) << endl;
  cout << "num buckets = " << us.bucket_count() << endl;
  cout << "load factor = " << us.load_factor() << endl;

  unordered_multiset<Student, StudentHashFunction> uss = {{50, "Simon"}, {20, "Thomas"}, {50, "Simon"}};
  for(auto& st: uss)
    st.print_student();


    return 0;
}






/**
 * 
 * MAP -C++ STL
 * 
 * 
 * 
 * an associative container that contains key value pairs with unique keys (sorted)
 * 
 * 
 * need to include<map> header file
 * 
 * a user provided comapre can be supplied to change the ordering(sorting)
 * 
 * 
 * search, removal, and insertion tiea are logarithmic
 * 
 * usually implemented as RB trees
 * 
 * 
 * 
 * 
 * MAP FUNCTONS
 * 
 * 
 * size()
 * =
 * [] at()
 * clear()
 * count() find()
 * empty()
 * ensert......
 * erasse......
 * begin() end()
 * upper+bound(key)  lower_bound(key)
 * 
 * 
 * 
 * insert(p)
 * 	*inserts pair p
 * 	*returns pair consisiting of iterator to inserted element(or element presnnt) and
 * 	bool set to true of insrtion took place
 * 
 *	insert(it pos1, it pos2)
 * 	*insrts elemensts in range [pos1, pos2)
 * 	*returns nothing(void)
 * 
 * insert(initialise_lost)
 * 	*insrts elements from initialiser list
 * 	*returns nothing(void)
 * 
 * 
 * 
 * 
 * 
 * 	ERASE()
 * 
 * 
 * erase(iterator pos)
 * 	*removes element at position pos
 * 	*returns iterator following kast element removed
 * 
 * 
 * erase(it pos1, it pos2)
 * 	*removes elements in range[pos1, pos2)
 * 	*returns iterator following last element removed
 * 
 * erase(key)
 * 	*removes elements with key(if present) key
 * 	*returns number of elements removed
 * 
 * 
 * **/

usually implemented as RB trees

template<
	class key,
	class T,
	class Comapre = std::less<key>
	class allocator = std::allocator<std::pair<const key, T>>,
	> class map;



/* *********************************************************
 * KNOWLEDGE CENTER
 * std::map
 * Detailed Video Explanation: https://youtu.be/w1vDg3iBbLA
********************************************************** */


#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> m = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
  cout << "size = " << m.size() << endl;
  for(auto& p: m)
    cout << "{" << p.first << ", " << p.second << "} ";
  cout << endl;
  m.insert({100, "rabbit"});
  m.insert({10, "fish"});
  for(auto& p: m)
    cout << "{" << p.first << ", " << p.second << "} ";
  cout << endl;

  //auto it = m.erase(m.find(10));
  //cout << it->first << endl;

  int num_erased = m.erase(15);
  cout << "num_erased = " << num_erased << endl;

  auto ub = m.upper_bound(15);
  auto lb = m.lower_bound(15);
  cout << "ub = " << ub->first << endl;
  cout << "lb = " << lb->first << endl;

  m.insert({{-10, "apple"}, {-30, "orange"}, {-20, "mango"}});
  for(auto& p: m)
    cout << "{" << p.first << ", " << p.second << "} ";
  cout << endl;

  map<int, string> m2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};
  m.insert(m2.begin(), m2.end());

  for(auto& p: m)
    cout << "{" << p.first << ", " << p.second << "} ";
  cout << endl;

}




/**
 * MULTIMAP -> C++ STL
 * 
 * 
 * 
 * an associative container that containe=s sorted list oif ey value paisrs allowing multiple entries with the same keys
 * 
 * 
 * need to include <map< header file
 * 
 * a user defined compare can be supplied ti change the ordering(sortin)
 * 
 * search, remnoval and insertion times are logarithmic
 * 
 * usuually implemented as RB trees
 * 
 * 
 * 
 * 
 * 
 * INSERT
 * 
 * 
 * 
 * 
 * ERASE
 * 
 
 * 
 * */

template< 
	class key, 
	class T,
	class compare = stdL::less<key>,
	class allocator = std::allocator<std::pair<const  key, T>>,
	>class multimap;


/* *********************************************************
 * KNOWLEDGE CENTER
 * std::multimap
 * Detailed Video Explanation: https://youtu.be/nbZpBlQ_Dn8
********************************************************** */

/******
 * Copyright: Abhishek
 * 
 * ****/


 
#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
    cout << "size = " << m.size() << endl;
  
    for(auto& p: m)
        cout << "{" << p.first << ", " << p.second << "} ";
    cout << endl;
    
    m.insert({100, "rabbit"});
    m.insert({10, "fish"});
    m.insert({{10, "cat"}, {12, "bat"}});
    m.insert(make_pair<int, string>(12, "bat_2"));
    
    for(auto& p: m)
        cout << "{" << p.first << ", " << p.second << "} ";
    cout << endl;
    
    map<int, string> m2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};
    m.insert(m2.begin(), m2.end());
    
    for(auto& p: m)
        cout << "{" << p.first << ", " << p.second << "} ";
    cout << endl;
    
    //cout << "size = " << m.size() << endl;
    //auto it = m.erase(10);// 
    //m.erase(m.find(10));
    //cout << it->first << endl;
    //cout << "size = " << m.size() << endl;
    
    auto ub = m.upper_bound(15);
    auto lb = m.lower_bound(15);
    cout << "ub = " << ub->first << endl;
    cout << "lb = " << lb->first << endl;
    
    auto range = m.equal_range(10);
    for(auto it = range.first; it != range.second; ++it)
        cout << it->second << "   ";
    cout << endl;
    
}

