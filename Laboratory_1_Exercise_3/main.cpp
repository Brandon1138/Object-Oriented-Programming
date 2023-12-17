#include <iostream>
#include <vector>
#include <algorithm>

struct Course {
    std::string name;
    int startTime;
    int endTime;

    Course(std::string n, int start, int end) : name(std::move(n)), startTime(start), endTime(end) {}
};

bool compareByStartTime(const Course& a, const Course& b) {
    return a.startTime < b.startTime;
}

int main() {
    std::vector<Course> courses;
    int numberOfCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numberOfCourses;

    std::cout << "Enter each course's details in the following format:\n";
    std::cout << "CourseName_without_spaces StartTime EndTime\n";
    std::cout << "Example: Baze_de_Date 0930 1210\n";

    for(int i = 0; i < numberOfCourses; i++) {
        std::string name;
        int start, end;
        std::cout << "Enter course name, start time and end time: ";
        std::cin >> name >> start >> end;
        courses.emplace_back(name, start, end);
    }

    std::sort(courses.begin(), courses.end(), compareByStartTime);
    
    std::cout << "Sorted Courses:" << std::endl;
    for (const auto& course : courses) {
        std::cout << "Course Name: " << course.name << ", Start Time: " << course.startTime << ", End Time: " << course.endTime << std::endl;
    }

    return 0;
}