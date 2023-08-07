int main() {
    Logger logger;
    
    int userType;
    cout << "Enter user type (1: Admin, 2: Lecturer, 3: Student): ";
    cin >> userType;

    switch (userType) {
        case 1:
            {
                Admin admin("Admin Name", userType);
                logger.logLogin(&admin);
                
                int adminOption;
                cout << "Select admin option:\n";
                cout << "1. View Logins\n";
                cout << "2. Manage Courses\n";
                // Add more options...
                cin >> adminOption;

                switch (adminOption) {
                    case 1:
                        admin.viewLogins();
                        break;
                    case 2:
                        admin.manageCourses();
                        break;
                    // Handle other admin options...
                    default:
                        cout << "Invalid option\n";
                }
            }
            break;
            
        case 2:
            {
                Lecturer lecturer("Lecturer Name", userType);
                logger.logLogin(&lecturer);
                
                int lecturerOption;
                cout << "Select lecturer option:\n";
                cout << "1. Upload Assignment\n";
                cout << "2. Publish Analytics\n";
                // Add more options...
                cin >> lecturerOption;

                switch (lecturerOption) {
                    case 1:
                        lecturer.uploadAssignment();
                        break;
                    case 2:
                        lecturer.publishAnalytics();
                        break;
                    // Handle other lecturer options...
                    default:
                        cout << "Invalid option\n";
                }
            }
            break;
            
        case 3:
            {
                Student student("Student Name", userType);
                logger.logLogin(&student);
                
                int studentOption;
                cout << "Select student option:\n";
                cout << "1. Download File\n";
                cout << "2. Access Materials\n";
                // Add more options...
                cin >> studentOption;

                switch (studentOption) {
                    case 1:
                        student.downloadFile();
                        break;
                    case 2:
                        student.accessMaterials();
                        break;
                    // Handle other student options...
                    default:
                        cout << "Invalid option\n";
                }
            }
            break;
            
        default:
            cout << "Invalid user type\n";
    }

    return 0;
}