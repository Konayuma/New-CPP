#include <iostream>
#include <vector>
#include <map>

using namespace std;

class User {
protected:
    string name;
    int id; 
public:
    User(string n, int i) : name(n), id(i) {}
    string getName() const { return name; }
    int getID() const {return id; }
};

class Admin : public User {
public:
    Admin(string n) : User(n) {}
    void viewLogins() { /* Implementation */ }
    void manageCourses() { /* Implementation */ }
    void manageStudents() { /* Implementation */ }
    void scheduleClasses() { /* Implementation */ }
    void manageDatabase() { /* Implementation */ }
};

class Lecturer : public User {
public:
    Lecturer(string n) : User(n) {}
    void uploadAssignment() { /* Implementation */ }
    void publishAnalytics() { /* Implementation */ }
    void respondToQuestions() { /* Implementation */ }
    void publishResults() { /* Implementation */ }
    void uploadCourseMaterial() { /* Implementation */ }
    void respondToStudent() { /* Implementation */ }
};

class Student : public User {
public:
    Student(string n) : User(n) {}
    void downloadFile() { /* Implementation */ }
    void uploadFile() { /* Implementation */ }
    void accessMaterials() { /* Implementation */ }
    void interactWithPeers() { /* Implementation */ }
    void accessTestsAndAssignments() { /* Implementation */ }
    void askQuestionToLecturer() { /* Implementation */ }
};

class Logger {
private:
    std::map<int, std::string> userTypes;
public:
    Logger() {
        userTypes[1] = "Admin";
        userTypes[2] = "Lecturer";
        userTypes[3] = "Student";
    }
    void logLogin(User* user) {
        cout << userTypes[user->getID()] << " " << user->getName() << " logged in.\n";
    }
};

int main() {
    Logger logger;
    Admin admin("Admin Name", 1);
    logger.logLogin(&admin);

    // Simulate interactions
    admin.viewLogins();
    // Other admin functionalities...

    Lecturer lecturer("Lecturer Name", 2);
    logger.logLogin(&lecturer);
    lecturer.uploadAssignment();

    Student student("Student Name", 3);
    logger.logLogin(&student);
    student.downloadFile();

    return 0;
}




   
    
