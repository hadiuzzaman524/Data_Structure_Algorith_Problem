#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

struct student
{
    string matrix;
    float carry_m;
    float fe_m;
    float total_m;
    string grade;
    string name;
};


// Function prototypes
void p_line();
int readFile(struct student students[]);
void getGrade(struct student students[], int n, float &average);
int getHighest(struct student students[], int n);
void displayAll(struct student students[], int n);

int main()
{
    // Create an array of student struct
    struct student students[100];

    // Read data from text file and store them
    // into the array created above.
    int noOfStudnets = readFile(students);

    float average;
    // Assign total_m and grade
    // and calculate average of total
    getGrade(students, noOfStudnets, average);

    // Get index of student with highest total_m
    int highest = getHighest(students, noOfStudnets);

    // Display all data of array
    displayAll(students, noOfStudnets);

    // Display average
    cout << "Average : " << average << " of Total-M\n";

    p_line();

    // Display details of student having highest total_m
    cout << "Highest : ";

    cout << setw(5) << students[highest].matrix;
    cout << setw(15) << students[highest].name;
    cout << setw(8) << students[highest].carry_m;
    cout << setw(8) << students[highest].fe_m;
    cout << setw(8) << students[highest].total_m;
    cout << setw(8) << students[highest].grade;
    cout << endl;

    p_line();

    return 0;
}

// Function to print -
void p_line()
{
    for(int i = 0; i < 70; i++)
        cout << '-';
    cout << endl;
}

// Function to read text file and store the data into struct student array
// Returns number of students/records present in the file
int readFile(struct student students[])
{
    ifstream file;

    // Open the file
    file.open("inputS.txt");

    // Check if file is successfully opened
    if(!file.is_open())
    {
        cout << "inputS.txt file not found!!\n";
        exit(1);
    }

    int n = 0;

    char line[100];

    // Read lines of opened input file
    while(file.getline(line, 100))
    {
        // Get matrix
        students[n].matrix = strtok(line, " ");
        // Get carry_m
        students[n].carry_m = stod(strtok(NULL, " "));
        // Get fe_m
        students[n].fe_m = stod(strtok(NULL, " "));
        // Get name of student
        students[n].name = strtok(NULL, "");
        n++;
    }

    // Close the file
    file.close();

    return n;
}

// Function to calculate total_m and assign grade
void getGrade(struct student students[], int n, float &average)
{
    average = 0;
    // Loop over the array of student
    for (int i = 0; i < n; i++)
    {
        // calculate total
        students[i].total_m = students[i].carry_m + students[i].fe_m;
        // Add to average
        average += students[i].total_m;

        // Assign grade according to condition given in the question
        if (students[i].total_m >= 90 && students[i].total_m <= 100)
        {
            students[i].grade = "A+";
        }
        else if (students[i].total_m >= 80 && students[i].total_m <= 89)
        {
            students[i].grade = "A";
        }
        else if (students[i].total_m >= 75 && students[i].total_m <= 79)
        {
            students[i].grade = "A-";
        }
        else if (students[i].total_m >= 70 && students[i].total_m <= 74)
        {
            students[i].grade = "B+";
        }
        else if (students[i].total_m >= 65 && students[i].total_m <= 69)
        {
            students[i].grade = "B";
        }
        else if (students[i].total_m >= 60 && students[i].total_m <= 64)
        {
            students[i].grade = "B-";
        }
        else if (students[i].total_m >= 55 && students[i].total_m <= 59)
        {
            students[i].grade = "C+";
        }
        else if (students[i].total_m >= 50 && students[i].total_m <= 54)
        {
            students[i].grade = "C";
        }
        else if (students[i].total_m >= 45 && students[i].total_m <= 49)
        {
            students[i].grade = "C-";
        }
        else if (students[i].total_m >= 40 && students[i].total_m <= 44)
        {
            students[i].grade = "D+";
        }
        else if (students[i].total_m >= 35 && students[i].total_m <= 39)
        {
            students[i].grade = "D";
        }
        else if (students[i].total_m >= 30 && students[i].total_m <= 34)
        {
            students[i].grade = "D-";
        }
        else if (students[i].total_m >= 0 && students[i].total_m <= 29)
        {
            students[i].grade = "E";
        }
    }

    // calculate average
    average = average / n;
}

// Function to index of student with highest total_m
int getHighest(struct student students[], int n)
{
    float max = students[0].total_m;
    int index = 0;
    // Loop over the array of struct student array
    for (int i = 1; i < n ; i++)
    {
        // Check for max
        if (students[i].total_m > max)
        {
            max = students[i].total_m;
            index = i; // Store index of ax
        }
    }
    // Return index of max
    return index;
}

// Function to display all records stored in the struct student array
void displayAll(struct student students[], int n)
{
    p_line();
    cout << "Students Records:" << endl;
    p_line();
    // Print header
    cout << setw(15) << "Matrix";
    cout << setw(15) << "Name";
    cout << setw(8) << "Carry-M";
    cout << setw(8) << "FE-M";
    cout << setw(8) << "Total-M";
    cout << setw(12) << "Grade\n";

    // Loop over the array of struct student array
    for (int i = 0; i < n; i++)
    {
        // Print details
        cout << setw(15) << students[i].matrix;
        cout << setw(15) << students[i].name;
        cout << setw(8) << students[i].carry_m;
        cout << setw(8) << students[i].fe_m;
        cout << setw(8) << students[i].total_m;
        cout << setw(8) << students[i].grade;
        cout << endl;
    }
    cout << endl;
}
