
#include<iostream>
#include<string>
#include<fstream>
#include<regex>   // For email validation
using namespace std;

int guess;
int Total;

string Name, Email, Roll_no;
fstream file;

class data{
    
    public:
    void Register();
}obj;

class Question{

    private:
    string Question_text;
    string Option_1;
    string Option_2;
    string Option_3;
    string Option_4;

    int correct_Option;
    int Question_score;
    
    public:
    void setvalue(string,string,string,string,string,int ,int);
    void Ask_Question();
};
bool isValidRollNo(const string &rollNo)
{
    // roll number validation
    const regex pattern("\\d{1,8}");
    return regex_match(rollNo, pattern);
}

bool isValidEmail(const string &email)
{
    // for email validation
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}

bool isValidName(const string &name) {
    // for name validation (assuming names are alphabetic and possibly contain spaces)
    const regex pattern("[A-Za-z ]+$");
    return regex_match(name, pattern);
}

int main(){
    
    cout<<"       ****************************************"<<endl;
    cout<<"       *        Welocme To The Quize          *"<<endl;
    cout<<"       *  ---------------------------------   *"<<endl;
    cout<<"       *                  BY                  *"<<endl;
    cout<<"       *                                      *"<<endl;
    cout<<"       *             Anuj Shrivastav          *"<<endl;
    cout<<"       *                                      *"<<endl;
    cout<<"       ****************************************"<<endl;
    
    cout<<"\n1- Registeration";
    cout<<"\n2- Exit";
    cout<<"\nEnter Your Choice:";
    int choice;
    do{
        cin>>choice;
        if(choice>2){
            cout<<"Invalid Selection..."<<endl;
            continue;
        }
        break;// end loop when choies correct

    }while(true);
    
    
    switch(choice){
        case 1:
            obj.Register();
            break;

        case 2:
            return 0;
            break;
            
    }

    Question q1; //objects of Question class
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    //pasing the value in setvalue of Question,option,Answer and marks
    q1.setvalue("1.What is the only function All c++ program must contains?",
                "start()",
                "swap()",
                "main()",
                "function()",
                3,
                10);

    q2.setvalue("2.Which of the following is correct comment to Use ?",
                "*/ comment */",
                "/* comment */",
                "** comment **",
                "{ comment }",
                2,
                10);

    q3.setvalue("3.the statement of i++ is equivalent to:",
                "i=i+1",
                "i=i+i",
                "i=i+2",
                "i=i++",
                1,
                10);

    q4.setvalue("4.in C++ 14%4= ",
                "4",
                "1",
                "3",
                "2",
                4,
                10);

    q5.setvalue("5.When a function call itself known As:",
                "Pass by Reference",
                "Recursion",
                "Pass by Value",
                "iteration ",
                2,
                10);

    q6.setvalue("6.The name of a variable is also known as its:",
                "Identifier",
                "constant",
                "data type",
                "base",
                1,
                10);
    q7.setvalue("7.int main(), what does the int stand for ?",
                "return type",
                "method",
                "class",
                "function",
                1,
                10);
    q8.setvalue("8.Which of the following is not a type of Construnctor in C++ ?",
                "Default constructor",
                "Parametersized constructor",
                "Copy constructor",
                "interit constructor",
                4,
                10);
    q9.setvalue("9.Which of the following Approch is used in C++ ?",
                "Left-right",
                "Right-left",
                "Top- bottom",
                "Bottom-top",
                4,
                10);
    q10.setvalue("10.Which of the following type is provided by C++ but not C ?",
                "int",
                "Bool",
                "double",
                "long",
                2,
                10);
    
    cout<<"\n--------> Press Enter to Start the Quize...  <------------"<<endl;
    cin.get();
    
    //Ask Question call
    q1.Ask_Question();
    q2.Ask_Question();
    q3.Ask_Question();
    q4.Ask_Question();
    q5.Ask_Question();
    q6.Ask_Question();
    q7.Ask_Question();
    q8.Ask_Question();
    q9.Ask_Question();
    q10.Ask_Question();

        cout<<"\n   ***Your Total Score Is: "<<Total<<" Out Of 100  **"<<endl;
        cout<<endl;

    //printing result of quize
    if(Total>=40){

        file.open("Quizelogindata.txt",ios::out| ios::app);
        file<<"\nResult: PASSED"<<"\nTotal Marks: "<<Total<<"\n"<<endl;
        file.close();


        cout<<"   **********************************************"<<endl;
        cout<<"   *             ** Conratulation **            *"<<endl;
        cout<<"   *  ----------------------------------------  *"<<endl;
        cout<<"   *                                            *"<<endl;
        cout<<"   *            YOU ARE PASSED THE QUIZE        *"<<endl;
        cout<<"   *                                            *"<<endl;
        cout<<"   **********************************************"<<endl;
    } else {
        
        cout<<"   **********************************************"<<endl;
        cout<<"   *                ** Sorry **                 *"<<endl;
        cout<<"   *  ----------------------------------------  *"<<endl;
        cout<<"   *                                            *"<<endl;
        cout<<"   *         YOU ARE FAILED IN THE QUIZE        *"<<endl;
        cout<<"   *                                            *"<<endl;
        cout<<"   **********************************************"<<endl;
        
        file.open("Quizelogindata.txt",ios::out| ios::app);
        file<<"\nResult: PASSED"<<"\nTotal Marks: "<<Total<<"\n\n"<<endl;
        file.close();
    }

    return 0;
}

void data :: Register(){

    do {
        cout<<"\nEnter your Name:";
        cin.ignore();
        getline(cin,Name);
        if(Name.empty()||!isValidName(Name)){
            cout<<"Invalid name. Please Try Again "<<endl;
            continue;
        }
        
        cout<<"\nEnter your Roll Number:";
        getline(cin,Roll_no);
        if(Roll_no.empty()||!isValidRollNo(Roll_no)){
            cout<<"Invalid Roll Number. Please Try Again "<<endl;
            continue;
        }
        
        cout<<"\nEnter your Email Address:";
        getline(cin,Email);
        if(Email.empty() || !isValidEmail(Email)){
            cout<<"Invalid Email. Please Try Again "<<endl;
            continue;
        }
        
        break; // Exit the loop if all input correct

    } while (true);

     // If all inputs are valid, proceed with Registration 
    file.open("Quizelogindata.txt",ios::out| ios::app);
    file<<"Name: "<<Name<<"\nRoll Number: "<<Roll_no<<"\nEmail: "<<Email;
    file.close();
        
    cout<<"\nRegistration successful!"<<endl;

}

void Question:: setvalue(string q,string ptn1,string ptn2,string ptn3,string ptn4,int ca,int pa){
    Question_text=q;
    Option_1=ptn1;
    Option_2=ptn2;
    Option_3=ptn3;
    Option_4=ptn4; 
    correct_Option=ca;// coreect option of the Question
    Question_score=pa;//point of A anserwe
}

void Question :: Ask_Question(){
    cout<<endl;
    cout<<Question_text<<endl;
    cout<<"1. "<<Option_1<<endl;
    cout<<"2. "<<Option_2<<endl;
    cout<<"3. "<<Option_3<<endl;
    cout<<"4. "<<Option_4<<endl;

    cout<<"Enter Correct Option:"<<endl;
    cin>>guess;
    while(guess>4||guess<=0){
        cout<<"Entered Option is Invalid...! \nTry Again"<<endl;
        cin>>guess; 
    }

    if(guess==correct_Option){
            cout<<"Entered Option is Correct... "<<endl;
         Total+=Question_score;

        }
   
}
