#Q1
A class is a way to repreasnt data and the functions that operate on them. It has 2 sections:-
* The private section: holds the data members or the attributes of the object.
* The public section: holds the member functions which specifies how the object behaves. Also that section is the interface through
  which you can communicate with the object.

#Q2
* Abstraction: by providing a public interface through which the user communicates with the object,
  without needing to know the implementation details.
* Encapsulation: by putting the data and the functions that operate on them together.
* Data hiding: by preventing the user from accessing the object's attributes directly but through the public interface the calss
  programmer provided. Also by hiding the implementaion details that the client doesn't need to know under the public interface so 
  if the implementaion changed while mentaining that interface all the programs that uses that interface don't need to change.

#Q3
A class is the blueprint of an object. And an object is an instance of a class.

#Q4
Each object has its own data members even objects of the same class. But objects of the same class share the same member functions
but they operate on each object's data members.

#Q5
Constructor is called when the object is first created. Destructor is called when the object is deleted.

#Q6
A default constructor is a constructor which takes no arguments. A default constructor which do nothing is supplied by the 
compiler if the class programmer doesn't provide a constructor for the class.
The advantage is that you can initialize the data members with default values if the client created uninitalized object.

#Q7
this is a way for the object to refer to itself. The difference between the two is:
* this: refers to the address of the invoking object.
* *this: refers to the invoking object itself.


