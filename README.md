# Quize-Applicarion

## CLI Quiz Application 

A Command Line Interface (CLI) Quiz application developed using C++. This application includes a comprehensive user registration system with validation for names, roll numbers, and email addresses. User data and quiz results are efficiently managed through file handling. The quiz features multiple-choice questions with accurate scoring and immediate feedback. The application is designed for a user-friendly experience, with clear prompts and robust error handling.


### Features

- **User Registration**: 
  - Users can register with their name, roll number, and email address.
  - The registration process includes validation to ensure the correctness of the inputs.
  - Validations include checking for alphabetic characters in names, numeric characters in roll numbers, and proper email formats.

- **Question Management**:
  - The application includes ten multiple-choice questions.
  - Each question has four options, from which the user must select the correct one.
  - The correct option and the score for each question are predefined.

- **Scoring System**:
  - Users are scored based on their answers to the questions.
  - A total score out of 100 is calculated and displayed at the end of the quiz.
  - A pass/fail message is displayed based on the total score, with 40 as the passing mark.

- **Data Storage**:
  - User registration details and quiz results are stored in a file named `Quizelogindata.txt`.
  - The stored data includes the user's name, roll number, email, and quiz results.

- **Error Handling**:
  - The application includes robust validation to handle incorrect inputs during registration and quiz participation.
  - Users are prompted to re-enter their details or answers if invalid data is detected.
