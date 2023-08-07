#include <iostream>
#include <cstdlib>
using namespace std;


int main() {    
    int user;
    cout << "Select User Type:" <<endl;
    cout << "\t1. System Admin" <<endl;
    cout << "\t2. Lecturer" <<endl;
    cout << "\t3. Student" <<endl;
    cin >> user;
    system("clear");

    switch(user) {
        case 1: { // ... (System Admin)
            int Admin_option;    
                    cout << "Select admin option:\n";
                    cout << "\t1. View Logins\n";
                    cout << "\t2. Manage Courses\n";
                    cout << "\t3. Manage Student Information\n";
                    cout << "\t4. Manage class Scheduling \n";
                    cout << "\t5. Manage Data Base\n";
                    cin >> Admin_option;
                    system("clear");
                switch (Admin_option) {
                case 1:
                    // Implementation for View Logins for students 
                    cout << " COURSE MANAGEMENT " <<endl;
                    cout << " STUDENT " <<endl;
                    cout << "\t\t Name \t\t\t Sin \t\t\t Login Time " <<endl;
                    cout << "\t\t Fredrick Mwepu\t\t 22102325\t\t 08:03hrs " <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t 08:10hrs" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t 08:20hrs" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t 08:30hrs" <<endl;
                    cout << "\t\t \t\t \t\t" <<endl;
                    cout << " " <<endl;
                    // Implementation for View Logins for lecturers 
                    cout << " LECTURER " <<endl;
                    cout << " " <<endl;
                    cout << "\t\t Name\t\t ID\t\t Department " <<endl;
                    cout << "\t\t Lecturer X\t\t 98765432\tThe School Information, Communication and Technology"<<endl;
                    cout << "\t\t Lecturer X\t\t 23456789\tThe School Information, Communication and Technology" <<endl;
                    cout << "\t\t Lecturer Y\t\t 12345678\tThe School Of Natural Sciences and Mathematics" <<endl;
                    break;
                    system("clear");
                case 2:
                    // Implementation for Manage Courses
                    cout << " COURSE MANAGEMENT " <<endl;
                    cout << " " <<endl;
                    cout << " The School of Information, Communication and Technology " <<endl;
                    cout << "\tCourse Code \tLecturer " <<endl;
                    cout << "\tCS15O \t\tLecturer X " <<endl;
                    cout << "\tMA11O \t\tLecturer X " <<endl;
                    cout << "\tCS130 \t\tLecturer X " <<endl;
                    cout << "\tCS120 \t\tLecturer X " <<endl;
                    cout << "\tLA111 \t\tLecturer X " <<endl;
                    cout << "\tPH110 \t\tLecturer X " <<endl;
                    cout << " " <<endl;
                    cout << " The School of Natural Sciences and Mathematics " <<endl;
                    cout << "\tCourse Code \tLecturer " <<endl;
                    cout << "\tCS110 \t\tLecturer y " <<endl;
                    cout << "\tMA11O \t\tLecturer y " <<endl;
                    cout << "\tCH110 \t\tLecturer y " <<endl;
                    cout << "\tBI110 \t\tLecturer y " <<endl;
                    cout << "\tLA111 \t\tLecturer y " <<endl;
                    cout << "\tPH110 \t\tLecturer y " <<endl;
                    break;
                    system("clear");
                case 3:
                    // Implementation for Manage Student Information
                    cout << " STUDENT INFOR " <<endl;
                    cout << " " <<endl;
                    cout << "\t\t Name \t\t Sin \t\t Program " <<endl;
                    cout << "\t\t Fredrick Mwepu\t\t 22102325\t\t Computer Engineering" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t Non Quota" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t Computer Science" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t Non Quota" <<endl;
                    cout << "\t\t Sepo Konayuma \t\t 22102325\t\t Computer Science" <<endl;
                    break;
                    system("clear");
                case 4:
                    // Implementation for Manage class Scheduling
                    // SICT
                    cout << " The School of Natural Sciences and Mathematics" <<endl;
                    cout << "\tDate \t\t Course \t Time  \t\t Venue" <<endl;
                    cout << "\t Monday \tCS110\t\t10:30hrs\tST1 " <<endl;
                    cout << "\t Tuesday\tMA11O\t\t14:00hrs \tST5" <<endl;
                    cout << "\t Wednesday\tCH110\t\t14:00hrs \tST5" <<endl;
                    cout << "\t Thursday\tBI110 \t\t14:00hrs \tST5" <<endl;
                    cout << "\t Friday\t LA111 \t\t\t14:00hrs \tST1" <<endl;
                    //NQ
                    cout << " The School of Information, Communication and Technology " <<endl;
                    cout << "\tDate \t\t Course \t Time  \t\t Venue" <<endl;
                    cout << "\t Monday \tCS120\t\t10:30hrs\tST1 " <<endl;
                    cout << "\t Tuesday\tMA11O\t\t14:00hrs \tST5" <<endl;
                    cout << "\t Wednesday\tPH110\t\t14:00hrs \tST5" <<endl;
                    cout << "\t Thursday\tCS13010 \t\t14:00hrs \tST5" <<endl;
                    cout << "\t Friday\t LA111 \t\t\t14:00hrs \tST1" <<endl;
                    break;
                    system("clear");
                case 5:
                    // Implementation for Manage Data Base
                    cout << " Nothing to see here ";
                    break;
                    system("clear");
                default:
                    cout << "Invalid option\n";
                }
            }
            break;
        
        case 2: {// ... (Lecturers)
                int Lecturer_option;
                    cout << " Select Lecturer option:\n";
                    cout << "\t 1. View Class Attendees \n";
                    cout << "\t 2. Uploading assignment, Quizzes\n";
                    cout << "\t 3. Publishing student performance analytics\n";
                    cout << "\t 4. Responding to student queries \n";
                    cout << "\t 5. Publishing results  \n";
                    cout << "\t 6. Uploading course material\n";
                    cin >> Lecturer_option;
                system("clear");
                switch (Lecturer_option) {
                    case 1:
                        
                        break;
                        system("clear");
                    case 2:
                        
                        break;
                        system("clear");
                    case 3:
                        
                        break;
                        system("clear");
                    case 4:
                        
                        break;
                        system("clear");
                    case 5:
                        
                        break;
                        system("clear");
                    case 6:
                        
                        break;
                        system("clear");
                    default:
                        cout << "Invalid option\n";
                }
        }    
        break;
        system("clear");

        case 3: {// ... (Students)
        int Student_option;
                    cout << "Select Student option:\n";
                    cout << "\t 1. View Logins\n";
                    cout << "\t 2. Uploading assignment, Quizzes\n";
                    cout << "\t 3. Publishing student performance analytics\n";
                    cout << "\t 4. Responding to student queries \n";
                    cout << "\t 5. Publishing results  \n";
                    cout << "\t 6. Uploading course material\n";
                    cin >> Student_option;
                system("clear");
                switch (Student_option) {
                    case 1:
                        
                        break;
                        system("clear");
                    case 2:
                        
                        break;
                        system("clear");
                    case 3:
                        
                        break;
                        system("clear");
                    case 4:
                        
                        break;
                        system("clear");
                    case 5:
                        
                        break;
                        system("clear");
                    case 6:
                        
                        break;
                        system("clear");
                    default:
                        cout << "Invalid option\n";
                }
        }    
            break;
        default:
        cout << " Invalid User Type, Please Try Again... " << endl;      
    }
    return 0;
}