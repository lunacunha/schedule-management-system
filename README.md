# Schedule Management System

## Project Overview

This project implements a schedule management system for university courses (UCs) and classes. The system allows viewing student and class schedules, managing student enrollments, and maintaining class balance constraints.

## Features

### Data Access
- **Student Schedule** - View the complete schedule for a student (by UP number or name)
- **Class Schedule** - Display schedule for a specific class
- **UC Schedule** - Show schedule for a specific course unit (UC)
- **Enrollment Statistics** - Find UCs with most enrolled students
- **Class Size** - Check number of students in a class

### Data Management
- **Switch Classes** - Move students between classes
- **Remove Enrollment** - Remove students from a UC/class
- **Add Enrollment** - Enroll students in a UC/class with validation

### Enrollment Constraints
- Students can only be in one class per UC
- Classes must have available capacity
- **Class Balance Rule** - Difference between class sizes must be ≤ 4 students
- **Minimum Capacity** - Classes must have at least 5 students
- Schedule conflict prevention (not yet implemented)

## Data Structures

### Core Classes

- **Students** - Represents a student with UP number, name, and enrolled classes
- **Classes** - Represents a class with day, start time, duration, type (T/TP/PL), UC code, and class code
- **Menu** - Handles user interface and navigation

### Data Storage
- Students stored in sets for efficient lookup
- Classes associated with students through set collections
- Vector-based parsing for CSV data

## Class Hierarchy
```
Students
├── up_number (string)
├── student_name (string)
└── classes (set<Classes>)

Classes
├── uc_code (string)
├── class_code (string)
├── day_of_class (string)
├── start_of_class (string)
├── duration_of_class (string)
└── type_of_class (string)
```

## Data Files

The system reads from three CSV files:

- **students_classes.csv** - Student enrollments (UP number, name, UC code, class code)
- **classes.csv** - Class schedules (class code, UC code, day, start time, duration, type)

## Implementation Details

### CSV Parsing
- `classes_toVector()` - Parses class schedule data
- `students_classes_toVector()` - Parses student enrollment data
- Data is loaded into vector structures for processing

### Validation Functions
- `count_students()` - Counts students enrolled in a class/UC
- `verify_preconditions()` - Validates enrollment constraints before changes

### Menu System
- Interactive command-line interface
- Input validation and case-insensitive commands
- Organized into data access and data modification sections

## Compilation and Usage
```bash
# Compile the project
make

# Run the program
./schedule_manager
```

## Notes

- All modifications enforce class balance constraints
- System prevents over-enrollment and maintains minimum class sizes
- Case-insensitive input handling for user convenience
- Pointer-based approach for efficient student and class management
