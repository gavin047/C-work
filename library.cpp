// name: gavin michori
//date : 6/7/2025
// adm no : bscit-01-0025/2025
// desc: library management system

#include <iostream>
#include<string>

using namespace std;

class person{
protected:
  string name;
    
public:
  // Default constructor
  person() {
      name = "";
  }
      
  // Parameterized constructor
  person(string n) {
      name = n;
  }
      
  void setname(string n){
    name = n;
  }

  //getter function
  string getname(){
    return name;
  }
};

class LibraryMember : public person {
private:
    int memberId;
    int booksBorrowed;
    
public:
    // Default constructor
    LibraryMember() : person() {
        memberId = 0;
        booksBorrowed = 0;
    }
        
    // Parameterized constructor that calls base class constructor
    LibraryMember(string n, int id, int books) : person(n) {
        memberId = id;
        booksBorrowed = books;
    }
        
    // Setter functions
    void setMemberId(int id) {
        memberId = id;
    }
        
    void setBooksBorrowed(int books) {
        booksBorrowed = books;
    }
        
    // Getter functions
    int getMemberId() {
        return memberId;
    }
        
    // Public member function to return number of books borrowed
    int getBooksBorrowed() {
        return booksBorrowed;
    }
        
    // Additional utility functions
    void borrowBook() {
        booksBorrowed++;
    }
        
    void returnBook() {
        if (booksBorrowed > 0) {
            booksBorrowed--;
        }
    }
        
    // Display member information
    void displayMemberInfo() {
        cout << "Member Name: " << getname() << endl;
        cout << "Member ID: " << getMemberId() << endl;
        cout << "Books Borrowed: " << getBooksBorrowed() << endl;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;
    
public:
    // Default constructor
    PremiumMember() : LibraryMember() {
        membershipFee = 0.0;
    }
        
    // Parameterized constructor that calls base class constructor
    PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }
        
    // Getter function for membership fee
    double getMembershipFee() {
        return membershipFee;
    }
        
    // Setter function for membership fee
    void setMembershipFee(double fee) {
        membershipFee = fee;
    }
        
    // Override display function to include membership fee
    void displayMemberInfo() {
        LibraryMember::displayMemberInfo(); // Call base class function
        cout << "Membership Fee: $" << getMembershipFee() << endl;
    }
};

int main() {
  cout << "=== Library Management System ===" << endl << endl;
    
  // Test basic person class
  cout << "1. Testing Person class:" << endl;
  person p1("Alice Smith");
  cout << "Person name: " << p1.getname() << endl << endl;
    
  // Test LibraryMember class
  cout << "2. Testing LibraryMember class:" << endl;
  LibraryMember member1("Bob Johnson", 1001, 2);
  member1.displayMemberInfo();
    
  cout << "\nBorrowing a book..." << endl;
  member1.borrowBook();
  member1.displayMemberInfo();
    
  cout << "\nReturning a book..." << endl;
  member1.returnBook();
  member1.displayMemberInfo();
  cout << endl;
    
  // Test PremiumMember class
  cout << "3. Testing PremiumMember class:" << endl;
  PremiumMember premium1("Sarah Wilson", 2001, 5, 149.99);
  premium1.displayMemberInfo();
    
  cout << "\nPremium member borrowing a book..." << endl;
  premium1.borrowBook();
  premium1.displayMemberInfo();
    
  cout << "\nPremium member returning a book..." << endl;
  premium1.returnBook();
  premium1.displayMemberInfo();
  cout << endl;
    
  // Test default constructors
  cout << "4. Testing default constructors:" << endl;
  LibraryMember member2;
  member2.setname("David Brown");
  member2.setMemberId(1002);
  member2.setBooksBorrowed(1);
  cout << "Regular member created with setters:" << endl;
  member2.displayMemberInfo();
  cout << endl;
    
  PremiumMember premium2;
  premium2.setname("Emma Davis");
  premium2.setMemberId(2002);
  premium2.setBooksBorrowed(3);
  premium2.setMembershipFee(199.99);
  cout << "Premium member created with setters:" << endl;
  premium2.displayMemberInfo();
  cout << endl;
    
  // Demonstrate polymorphism
  cout << "5. Demonstrating inheritance:" << endl;
  LibraryMember* memberPtr = &premium1;
  cout << "Accessing PremiumMember through LibraryMember pointer:" << endl;
  cout << "Member name: " << memberPtr->getname() << endl;
  cout << "Member ID: " << memberPtr->getMemberId() << endl;
  cout << "Books borrowed: " << memberPtr->getBooksBorrowed() << endl;
    
  cout << "\n=== End of Library Management System Demo ===" << endl;
    
  return 0;
}